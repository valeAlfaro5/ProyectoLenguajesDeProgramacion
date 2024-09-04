#include "databasemanager.h"

DatabaseManager::DatabaseManager() {
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("db4free.net");
    db.setPort(3306);
    db.setDatabaseName("holiwis");
    db.setUserName("kristycush");
    db.setPassword("Alavergawey");

    if (db.open()) {
        qDebug() << "Conectado!";

    } else {
        qDebug() << "Error: " << db.lastError().text();
    }

    cargarReservaciones();
}

DatabaseManager::~DatabaseManager() {
    if (db.isOpen()) {
        db.close();
    }
}

DatabaseManager& DatabaseManager::instance() {
    static DatabaseManager instance;
    return instance;
}

QSqlDatabase& DatabaseManager::getDatabase() {
    return db;
}

void DatabaseManager::cargarReservaciones() {
    QSqlQuery query("SELECT reservaID, clienteID, mesaID, cantidadPersonas, fecha, hora, activo FROM Reservaciones");
    while (query.next()) {
        Reservacion reservacion;
        reservacion.reservaID = query.value(0).toInt();
        reservacion.clienteID = query.value(1).toInt();
        reservacion.mesaID = query.value(2).toInt();
        reservacion.cantidadPersonas = query.value(3).toInt();
        reservacion.fecha = query.value(4).toDate();
        reservacion.hora = query.value(5).toTime();
        reservacion.activo = query.value(6).toBool();

        reservaciones.append(reservacion);
    }
}
