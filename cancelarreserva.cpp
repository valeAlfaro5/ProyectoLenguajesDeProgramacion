#include "cancelarreserva.h"
#include "ui_cancelarreserva.h"

CancelarReserva::CancelarReserva(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cancelarReserva)
{
    ui->setupUi(this);
}

CancelarReserva::~CancelarReserva()
{
    delete ui;
}
