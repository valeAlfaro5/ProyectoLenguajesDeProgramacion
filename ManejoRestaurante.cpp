#include "ManejoRestaurante.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <iostream>

using namespace std;

ManejoRestaurante::ManejoRestaurante(QObject *parent) : QObject(parent), db(DatabaseManager::instance().getDatabase()) {

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
        res.activo = query.value("activo").toBool();

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

//Verifica si hay una reservacion en esa fecha y hora
bool ManejoRestaurante::verificarDisponibilidad(int mesaID, const QDate& fecha, const QTime& hora) {

    QSqlQuery query;

    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE mesaID = :mesaID AND fecha = :fecha AND hora = :hora AND activo = true");
    query.bindValue(":mesaID", mesaID);
    query.bindValue(":fecha", fecha);
    query.bindValue(":hora", hora);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count == 0;
    } else {
        qDebug() << "Error: Could not verify mesa availability -" << query.lastError().text();
        return false; // Assuming false if the query fails, but you could handle this differently
    }
    /*
    for (const Reservacion& res : reservaciones) {
        if (res.mesaID == mesaID && res.fecha == fecha && res.hora == hora && res.activo == true) {
            return false;
        }
    }
    return true;
    */
}

int ManejoRestaurante::contarReservasPorCliente(int clienteID, const QDate& fecha) {

    QSqlQuery query;

    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE clienteID = :clienteID AND fecha = :fecha AND activo = true");
    query.bindValue(":clienteID", clienteID);
    query.bindValue(":fecha", fecha);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        std::cout << std::endl << count << std::endl;
        return count;
    } else {
        qDebug() << "Error: Could not count reservations for client -" << query.lastError().text();
        return 0; // Assuming 0 if the query fails, but you could handle this differently
    }

    /*
    int count = 0;
    for (const Reservacion& res : reservaciones) {
        if (res.clienteID == clienteID && res.fecha == fecha && res.activo == true) {
            count++;
        }
    }
    std:: cout << endl << count << endl;
    return count;
    */
}

int ManejoRestaurante::contarReservasActivasPorCliente(const QString& telefono) {
    QSqlQuery query;


    int clienteID = obtenerClienteIDPorTelefono(telefono);

    // Contar todas las reservaciones activas de un cliente
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE clienteID = :clienteID AND activo = true");
    query.bindValue(":clienteID", clienteID);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count;
    } else {
        qDebug() << "Error: " << clienteID << "-" << query.lastError().text();
        return -1;
    }
}

int ManejoRestaurante::obtenerClienteIDPorTelefono(const QString &telefono)
{
    QSqlQuery query;

    //Obtener ClienteID
    query.prepare("SELECT clienteID FROM Cliente WHERE telefono = :telefono");
    query.bindValue(":telefono", telefono);

    if (!query.exec() || !query.next()) {
        qDebug() << "Error: Cliente no encontrado del telefono " << telefono << " no encontrado." << query.lastError().text();
        return -1;
    }

    int clienteID = query.value(0).toInt();
    return clienteID;
}

bool ManejoRestaurante::clienteTieneReservaActiva(const QString& telefono, const QDate& fecha) {
    QSqlQuery query;


    int clienteID = obtenerClienteIDPorTelefono(telefono);

    if(clienteID == -1){
        qDebug() << "Error: Fallo con encontrar cliente o no existe";
        return false;
    }

    // Checquear si el cliente tiene una reservacion activa en la fecha especifica
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE clienteID = :clienteID AND fecha = :fecha AND activo = true");
    query.bindValue(":clienteID", clienteID);
    query.bindValue(":fecha", fecha);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    } else {
        qDebug() << "Error: No se pudo chequear " << clienteID << "en la fecha " << fecha << "-" << query.lastError().text();
        return false;
    }
}

int ManejoRestaurante::agregarReservacion(const QString& nombre, const QString& telefono, int mesaID, int cantidadPersonas, QDateEdit* fechaEdit, QTimeEdit* horaEdit) {
    QDate fecha = fechaEdit->date();
    QTime hora = horaEdit->time();

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDateTime reservationDateTime(fecha, hora);

    if (reservationDateTime <= currentDateTime) {
        qDebug() << "Error: Ese tiempo ya paso.";
        return 1;
    }


    //El restaurante opera de 1pm a 9pm
    if (hora < QTime(13, 0) || hora >= QTime(21, 0)) {
        qDebug() << "Error: Fuera de las horas del restaurante.";
        return 2;
    }

    QSqlQuery query;

    query.prepare("SELECT activa FROM Mesa WHERE mesaID = :mesaID");
    query.bindValue(":mesaID", mesaID);
    if (!query.exec() || !query.next()) {
        qDebug() << "Error: " << query.lastError().text();
        return -1;
    }

    bool mesaActiva = query.value(0).toBool();
    if (!mesaActiva) {
        qDebug() << "Error: Mesa no esta activa";
        return 3;
    }

    int clienteID;
    if (!clienteExiste(telefono, clienteID)) {
        if (!agregarCliente(nombre, telefono, clienteID)) {
            qDebug() << "Error: No se pudo agregar al cliente.";
            return -2;
        }
    }

    //No esta disponible
    if (!verificarDisponibilidad(mesaID, fecha, hora)) {
        qDebug() << "No esta disponible en ese dia y hora.";
        return 4;
    }

    //Un cliente solo puede tener una reserva activa por dia
    if(clienteTieneReservaActiva(telefono, fecha) == true){
        qDebug() << "Tiene reserva activa en la fecha.";
        return 5;
    }

    //Maximo 3 reservas activas por cliente
    if(contarReservasActivasPorCliente(telefono) >= 3){
        qDebug() << "Alcanzo su limite de reservaciones.";
        return 6;
    }

    /*
    // Un cliente puede tener una reservacion por dia o un maximo de3 reservaciones
    if (contarReservasPorCliente(clienteID, fecha) >= 1 || contarReservasPorCliente(clienteID, QDate()) >= 3) {
        qDebug() << "Error: El cliente se ha excedido de sus reservas maximas.";
        return false;
    }
    */



    query.prepare("INSERT INTO Reservaciones (clienteID, mesaID, cantidadPersonas, fecha, hora, activo) "
                  "VALUES (:clienteID, :mesaID, :cantidadPersonas, :fecha, :hora, :activo)");
    query.bindValue(":clienteID", clienteID);
    query.bindValue(":mesaID", mesaID);
    query.bindValue(":cantidadPersonas", cantidadPersonas);
    query.bindValue(":fecha", fecha);
    query.bindValue(":hora", hora);
    query.bindValue(":activo", true);

    if (query.exec()) {
        Reservacion res;
        res.reservaID = query.lastInsertId().toInt();
        res.clienteID = clienteID;
        res.mesaID = mesaID;
        res.cantidadPersonas = cantidadPersonas;
        res.fecha = fecha;
        res.hora = hora;

        reservaciones.append(res);
        return 7;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return -3;
    }
}

void ManejoRestaurante::llenarComboBoxMesasDisponibles(QDateEdit* fechaEdit, QTimeEdit* horaEdit, QComboBox* comboBox) {
    comboBox->clear();

    QDate fecha = fechaEdit->date();
    QTime hora = horaEdit->time();


    QSqlQuery mesaQuery("SELECT mesaID FROM Mesa WHERE activa = true");
    QList<int> allMesas;

    while (mesaQuery.next()) {
        allMesas.append(mesaQuery.value(0).toInt());
    }

    for (int mesaID : allMesas) {
        if (verificarDisponibilidad(mesaID, fecha, hora)) {
            comboBox->addItem(QString::number(mesaID));
        }
    }
}

void ManejoRestaurante::llenarComboBoxCapacidadMesa(int mesaID, QComboBox* comboBox) {
    comboBox->clear();


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

        for (int i = 1; i <= maxCapacidad; ++i) {
            comboBox->addItem(QString::number(i));
        }
    } else {
        qDebug() << "Error: " << query.lastError().text();
    }
}

bool ManejoRestaurante::clienteExiste(const QString &telefono)
{
    QSqlQuery query;

    query.prepare("SELECT clienteID FROM Cliente WHERE telefono = :telefono");
    query.bindValue(":telefono", telefono);

    if (!query.exec()) {
        qDebug() << "Error :" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return true;
    } else {
        return false;
    }
}
