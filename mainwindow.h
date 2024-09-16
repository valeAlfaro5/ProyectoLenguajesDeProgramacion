#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nuevareserva.h"
#include "buscarreservacion.h"
#include "nuevareserva_cliente.h"
//#include "manejarmesas.h"
#include "manejarmesas2.h"
#include "form.h"
#include "crearmesas3.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlError>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QTableWidget>
#include "databasemanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    NuevaReserva nuevaReserva;
    nuevareserva_cliente reservaCliente;
    //ManejarMesas manejoMesas;
    manejarmesas2 manejoMesas;
    BuscarReservacion buscarReservacion;
    Form formito;
    void llenarTablaReservaciones(QTableWidget *tableWidget);
    void llenarTablaDisponibilidad(QTableWidget *tableWidget, const QDate& fecha, int mesaID);
    void llenarComboBoxMesas(QComboBox *comboBox);
    void llenarTablaMesas(QTableWidget* tableWidget);
    void actualizarReservas();
    int rol;
    int clienteID;
    QString telefono;
    void llenarTablaReservacionesPorCliente(int clienteID, QTableWidget *tableWidget);
    Ui::MainWindow *ui;


    //crearmesas2 creacionMesas;
    crearmesas3 creacionMesa;


private slots:
    void on_actionSalir_2_triggered();

    void on_actionNueva_Reserva_2_triggered();

    void on_actionModificar_Reserva_triggered();

    void on_actionCrear_Mesa_triggered();

    void on_actionModificar_Mesa_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
};
#endif // MAINWINDOW_H
