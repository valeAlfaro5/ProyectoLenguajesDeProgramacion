#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSalir_2_triggered()
{
    this->setVisible(false);
}


void MainWindow::on_actionNueva_Reserva_2_triggered()
{
    formito.setVisible(true);
}


void MainWindow::on_actionModificar_Reserva_triggered()
{
    buscarReservacion.setVisible(true);
}


void MainWindow::on_actionCrear_Mesa_triggered()
{
    //crearMesa.setVisible(true);
    creacionMesa.setVisible(true);

}

