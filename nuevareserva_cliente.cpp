#include "nuevareserva_cliente.h"
#include "ui_nuevareserva_cliente.h"

nuevareserva_cliente::nuevareserva_cliente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::nuevareserva_cliente)
{
    ui->setupUi(this);
    clienteID = -1;
    telefono = "";
    ui->mesasDisponibles->setEnabled(false);
    ui->numeroComensales->setEnabled(false);
    ui->dateEdit->setDate(QDate::currentDate());
    QTime time(13,0);
    ui->timeEdit->setTime(time);
}

nuevareserva_cliente::~nuevareserva_cliente()
{
    delete ui;
}

void nuevareserva_cliente::on_pushButton_clicked()
{
    hola.llenarComboBoxMesasDisponibles(ui->dateEdit,ui->timeEdit, ui->mesasDisponibles);
    ui->mesasDisponibles->setEnabled(true);
}


void nuevareserva_cliente::on_mesasDisponibles_activated(int index)
{
    hola.llenarComboBoxCapacidadMesa(ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales);
    ui->numeroComensales->setEnabled(true);
}


void nuevareserva_cliente::on_pushButton_2_clicked()
{
    //la reserva
    /*
    if(hola.clienteExiste(ui->numeroTelefono->text()) == false && ui->nombreCliente->text().isEmpty()){
        QMessageBox::critical(this, "CHIVA!", "El cliente no existe. Tiene que ingresar un nombre.");

    }
    */
    //No se verifica ya que se hizo anteriormente

    int numeroRetornado = hola.agregarReservacion("",telefono, ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales->currentText().toInt(), ui->dateEdit, ui->timeEdit);
    ui->mesasDisponibles->setEnabled(false);
    ui->numeroComensales->setEnabled(false);

    switch(numeroRetornado){
    case 1:
        QMessageBox::critical(this, "Uy...", "Ese tiempo ya paso.");
        break;
    case 2:
        QMessageBox::critical(this, "Uy...", "Fuera de las horas del restaurante.");
        break;
    case 3:
        QMessageBox::critical(this, "Uy...", "La Mesa no esta activa.");
        break;
    case 4:
        QMessageBox::critical(this, "Uy...", "No esta disponible en ese dia y hora.");
        break;
    case 5:
        QMessageBox::critical(this, "Uy...", "Tiene reserva activa en la fecha.");
        break;
    case 6:
        QMessageBox::critical(this, "Uy...", "Alcanzo su limite de reservaciones.");
        break;
    case 7:
        QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
        this->setVisible(false);
        break;
    default:
        QMessageBox::critical(this, "Uy...", "Hubo un fallo con la base de datos o el query");
        break;
    }
}


void nuevareserva_cliente::on_dateEdit_dateChanged(const QDate &date)
{
    ui->mesasDisponibles->setEnabled(false);
    ui->numeroComensales->setEnabled(false);
}


void nuevareserva_cliente::on_timeEdit_dateChanged(const QDate &date)
{

}


void nuevareserva_cliente::on_timeEdit_timeChanged(const QTime &time)
{
    ui->mesasDisponibles->setEnabled(false);
    ui->numeroComensales->setEnabled(false);
}

