#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nuevareserva.h"
#include "buscarreservacion.h"
#include "crearmesas.h"
#include "form.h"
#include "crearmesas3.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlError>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>

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
    CrearMesas crearMesa;
    BuscarReservacion buscarReservacion;
    Form formito;
    //crearmesas2 creacionMesas;
    crearmesas3 creacionMesa;


private slots:
    void on_actionSalir_2_triggered();

    void on_actionNueva_Reserva_2_triggered();

    void on_actionModificar_Reserva_triggered();

    void on_actionCrear_Mesa_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
};
#endif // MAINWINDOW_H
