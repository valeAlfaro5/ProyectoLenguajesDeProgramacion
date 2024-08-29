#include "crearmesas.h"
#include "ui_crearmesas.h"

CrearMesas::CrearMesas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::crearMesas)
{
    ui->setupUi(this);
}

CrearMesas::~CrearMesas()
{
    delete ui;
}
