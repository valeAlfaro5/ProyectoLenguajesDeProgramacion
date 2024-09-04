#ifndef MANEJORESTAURANTE_H
#define MANEJORESTAURANTE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QList>
#include <QDate>
#include <QTime>
#include <QString>
#include <QComboBox>
#include <QDateEdit>
#include <QTimeEdit>
#include <databasemanager.h>


class ManejoRestaurante : public QObject {
    Q_OBJECT

public:
    explicit ManejoRestaurante(QObject *parent = nullptr);
    bool agregarReservacion(const QString& nombre, const QString& telefono, int mesaID, int cantidadPersonas, QDateEdit* fechaEdit, QTimeEdit* horaEdit);
    void llenarComboBoxMesasDisponibles(QDateEdit* fechaEdit, QTimeEdit* horaEdit, QComboBox* comboBox);
    void llenarComboBoxCapacidadMesa(int mesaID, QComboBox* comboBox);
    bool validarCliente(int clienteID, const QString& telefono);
    QSqlDatabase& db;

private:
    //QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    QList<Reservacion> reservaciones;

    bool cargarReservaciones();
    bool clienteExiste(const QString& telefono, int &clienteID);
    bool agregarCliente(const QString& nombre, const QString& telefono, int &clienteID);
    bool verificarDisponibilidad(int mesaID, const QDate& fecha, const QTime& hora);
    int contarReservasPorCliente(int clienteID, const QDate& fecha);
    bool clienteTieneReservaActiva(const QString& telefono, const QDate& fecha);
    int contarReservasActivasPorCliente(const QString& telefono);
    int obtenerClienteIDPorTelefono(const QString& telefono);


};

#endif // MANEJORESTAURANTE_H
