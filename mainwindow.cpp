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
    nuevaReserva.setVisible(true);
}


void MainWindow::on_actionModificar_Reserva_triggered()
{
    modificarReserva.setVisible(true);
}

