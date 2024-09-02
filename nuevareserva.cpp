#include "nuevareserva.h"
#include "ui_nuevareserva.h"
#include <QMessageBox>


NuevaReserva::NuevaReserva(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NuevaReserva)
{
    ui->setupUi(this);
}

NuevaReserva::~NuevaReserva()
{
    delete ui;
}

void NuevaReserva::on_buttonBox_accepted()
{
    this->setVisible(true);

    if(hola.agregarReservacion(ui->nombreCliente->text(),ui->numeroTelefono->text(), ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales->currentText().toInt(), ui->dateEdit, ui->timeEdit)){
        QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
    }else{
        QMessageBox::critical(this, "Uy...", "Hubo un fallo");
    }

   // QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");

}


void NuevaReserva::on_buttonBox_rejected()
{
    this->setVisible(false);
}


void NuevaReserva::on_timeEdit_userTimeChanged(const QTime &time)
{

}


void NuevaReserva::on_mesasDisponibles_currentIndexChanged(int index)
{
    hola.llenarComboBoxCapacidadMesa(ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales);
}


void NuevaReserva::on_pushButton_clicked()
{
    hola.llenarComboBoxMesasDisponibles(ui->dateEdit, ui->timeEdit, ui->mesasDisponibles);
}

