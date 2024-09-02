#include "ManejoRestaurante.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <iostream>

using namespace std;

ManejoRestaurante::ManejoRestaurante(QObject *parent) : QObject(parent), db(DatabaseManager::instance().getDatabase()) {
    // Initialize the database connection
    /*
    db.setHostName("db4free.net");
    db.setPort(3306);
    db.setDatabaseName("holiwis");
    db.setUserName("kristycush");
    db.setPassword("Alavergawey");

    if (db.open()) {
        qDebug() << "Conectado!";
        cout << "SE LOGROOO!!!";

    } else {
        qDebug() << "Error: " << db.lastError().text();
    }
    */
    // Load the list of reservations
    cargarReservaciones();
}

bool ManejoRestaurante::cargarReservaciones() {
    QSqlQuery query("SELECT * FROM Reservaciones");

    while (query.next()) {
        Reservacion res;
        res.reservaID = query.value("reservaID").toInt();
        res.clienteID = query.value("clienteID").toInt();
        res.mesaID = query.value("mesaID").toInt();
        res.cantidadPersonas = query.value("cantidadPersonas").toInt();
        res.fecha = query.value("fecha").toDate();
        res.hora = query.value("hora").toTime();

        reservaciones.append(res);
    }

    return true;
}

bool ManejoRestaurante::clienteExiste(const QString& telefono, int &clienteID) {
    QSqlQuery query;
    query.prepare("SELECT clienteID FROM Cliente WHERE telefono = :telefono");
    query.bindValue(":telefono", telefono);

    if (query.exec() && query.next()) {
        clienteID = query.value(0).toInt();
        return true;
    }
    return false;
}

bool ManejoRestaurante::agregarCliente(const QString& nombre, const QString& telefono, int &clienteID) {
    QSqlQuery query;
    query.prepare("INSERT INTO Cliente (nombre, telefono, rol) VALUES (:nombre, :telefono, 0)");
    query.bindValue(":nombre", nombre);
    query.bindValue(":telefono", telefono);

    if (query.exec()) {
        clienteID = query.lastInsertId().toInt();
        return true;
    }
    return false;
}

bool ManejoRestaurante::verificarDisponibilidad(int mesaID, const QDate& fecha, const QTime& hora) {
    for (const Reservacion& res : reservaciones) {
        if (res.mesaID == mesaID && res.fecha == fecha && res.hora == hora) {
            return false;
        }
    }
    return true;
}

int ManejoRestaurante::contarReservasPorCliente(int clienteID, const QDate& fecha) {
    int count = 0;
    for (const Reservacion& res : reservaciones) {
        if (res.clienteID == clienteID && res.fecha == fecha) {
            count++;
        }
    }
    return count;
}

bool ManejoRestaurante::agregarReservacion(const QString& nombre, const QString& telefono, int mesaID, int cantidadPersonas, QDateEdit* fechaEdit, QTimeEdit* horaEdit) {
    QDate fecha = fechaEdit->date();
    QTime hora = horaEdit->time();

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDateTime reservationDateTime(fecha, hora);

    if (reservationDateTime <= currentDateTime) {
        qDebug() << "Error: Cannot make a reservation for a date and time that has already passed.";
        return false;
    }

    // Check if the time is within operating hours
    if (hora < QTime(13, 0) || hora >= QTime(21, 0)) {
        qDebug() << "Error: Reservation time is outside operating hours.";
        return false;
    }

    // Check if the client exists, or add them
    int clienteID;
    if (!clienteExiste(telefono, clienteID)) {
        if (!agregarCliente(nombre, telefono, clienteID)) {
            qDebug() << "Error: Could not add new client.";
            return false;
        }
    }

    // Check if the table is available at the specified time
    if (!verificarDisponibilidad(mesaID, fecha, hora)) {
        qDebug() << "Error: Table is not available at the specified time.";
        return false;
    }

    // Check if the client has more than one reservation on the same day or more than three reservations in total
    if (contarReservasPorCliente(clienteID, fecha) >= 1 || contarReservasPorCliente(clienteID, QDate()) >= 3) {
        qDebug() << "Error: Client has exceeded reservation limits.";
        return false;
    }

    // Insert the reservation
    QSqlQuery query;
    query.prepare("INSERT INTO Reservaciones (clienteID, mesaID, cantidadPersonas, fecha, hora) "
                  "VALUES (:clienteID, :mesaID, :cantidadPersonas, :fecha, :hora)");
    query.bindValue(":clienteID", clienteID);
    query.bindValue(":mesaID", mesaID);
    query.bindValue(":cantidadPersonas", cantidadPersonas);
    query.bindValue(":fecha", fecha);
    query.bindValue(":hora", hora);

    if (query.exec()) {
        Reservacion res;
        res.reservaID = query.lastInsertId().toInt();
        res.clienteID = clienteID;
        res.mesaID = mesaID;
        res.cantidadPersonas = cantidadPersonas;
        res.fecha = fecha;
        res.hora = hora;

        reservaciones.append(res);
        return true;
    } else {
        qDebug() << "Error: Could not add reservation -" << query.lastError().text();
        return false;
    }
}

void ManejoRestaurante::llenarComboBoxMesasDisponibles(QDateEdit* fechaEdit, QTimeEdit* horaEdit, QComboBox* comboBox) {
    comboBox->clear();

    QDate fecha = fechaEdit->date();
    QTime hora = horaEdit->time();

    // Query to get all the mesaIDs
    QSqlQuery mesaQuery("SELECT mesaID FROM Mesa");
    QList<int> allMesas;

    while (mesaQuery.next()) {
        allMesas.append(mesaQuery.value(0).toInt());
    }

    // Check the availability of each mesa
    for (int mesaID : allMesas) {
        if (verificarDisponibilidad(mesaID, fecha, hora)) {
            comboBox->addItem(QString::number(mesaID));
        }
    }
}

void ManejoRestaurante::llenarComboBoxCapacidadMesa(int mesaID, QComboBox* comboBox) {
    comboBox->clear();

    // Query to get the size of the mesa
    QSqlQuery query;
    query.prepare("SELECT tamanio FROM Mesa WHERE mesaID = :mesaID");
    query.bindValue(":mesaID", mesaID);

    if (query.exec() && query.next()) {
        QString tamanio = query.value(0).toString();
        int maxCapacidad = 0;

        if (tamanio == "Dos") {
            maxCapacidad = 2;
        } else if (tamanio == "Cuatro") {
            maxCapacidad = 4;
        } else if (tamanio == "Seis") {
            maxCapacidad = 6;
        } else if (tamanio == "Ocho") {
            maxCapacidad = 8;
        }

        // Populate the comboBox with numbers from 1 to maxCapacidad
        for (int i = 1; i <= maxCapacidad; ++i) {
            comboBox->addItem(QString::number(i));
        }
    } else {
        qDebug() << "Error: Could not retrieve table size -" << query.lastError().text();
    }
}
