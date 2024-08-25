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

void ModificarReserva::on_buttonBox_2_accepted()
{

}

