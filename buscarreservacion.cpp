#include "buscarreservacion.h"
#include "ui_buscarreservacion.h"

#include "QMessageBox"

BuscarReservacion::BuscarReservacion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::buscarReservacion)
{
    ui->setupUi(this);
}

BuscarReservacion::~BuscarReservacion()
{
    delete ui;
}

void BuscarReservacion::on_buttonBox_accepted()
{

    if (ui->numeroReserva->text().isEmpty()){
        QMessageBox::information(this, "ERROR", "No se ha ingresado ningun numero!");
    }else{
        if(ui->numeroReserva->text().toInt()!=0){
            modificarReserva.setVisible(true);
        }else{
            QMessageBox::information(this, "ERROR!", "Porfavor ingrese un numero!");
        }
    }

}

