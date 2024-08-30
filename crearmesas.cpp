#include "crearmesas.h"
#include "ui_crearmesas.h"
#include <QMessageBox>

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

void CrearMesas::on_buttonBox_accepted()
{
    QMessageBox::information(this, "EXITO!", "Mesa creada exitosamente!");
}


void CrearMesas::on_buttonBox_rejected()
{
    QMessageBox::information(this, "ERROR!", "Ocurrio un error al crear esta mesa!");
}

