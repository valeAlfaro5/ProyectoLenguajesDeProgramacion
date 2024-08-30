#include "modificar_reserva.h"
#include "ui_modificar_reserva.h"
#include <QMessageBox>


ModificarReserva::ModificarReserva(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::modifcarReserva)
{
    ui->setupUi(this);
}

ModificarReserva::~ModificarReserva()
{
    delete ui;
}

void ModificarReserva::llenarInformacion(int numeroReserva)
{
    if(numeroReserva!= 0 ){

    }else{
        QMessageBox::information(this, "ERROR!", "No existe una reserva con ese numero!");
    }
}

void ModificarReserva::on_salirButton_clicked()
{

}

