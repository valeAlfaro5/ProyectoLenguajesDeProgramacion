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
    QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
}


void NuevaReserva::on_buttonBox_rejected()
{
    this->setVisible(false);
}

