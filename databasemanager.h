#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QTime>
#include <QDate>

struct Reservacion {
    int reservaID;
    int clienteID;
    int mesaID;
    int cantidadPersonas;
    QDate fecha;
    QTime hora;
    bool activo;
};

class DatabaseManager {
public:
    static DatabaseManager& instance();
    QSqlDatabase& getDatabase();
    QList<Reservacion> reservaciones;    // Shared list of reservations

private:
    DatabaseManager();
    ~DatabaseManager();
    void smfmiwemifwme();
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase db;
    void cargarReservaciones();
};

#endif // DATABASEMANAGER_H
