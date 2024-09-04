#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_buttonBox_accepted()
{
    this->setVisible(true);

    if(hola.agregarReservacion(ui->nombreCliente->text(),ui->numeroTelefono->text(), ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales->currentText().toInt(), ui->dateEdit, ui->timeEdit)){
        QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
    }else{
        QMessageBox::critical(this, "Uy...", "Hubo un fallo");
    }

    // QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
}


void Form::on_buttonBox_rejected()
{
    this->setVisible(false);
}


void Form::on_pushButton_clicked()
{
    hola.llenarComboBoxMesasDisponibles(ui->dateEdit, ui->timeEdit, ui->mesasDisponibles);
}


void Form::on_mesasDisponibles_activated(int index)
{
    hola.llenarComboBoxCapacidadMesa(ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales);
}


void Form::on_pushButton_2_clicked()
{
    if(hola.agregarReservacion(ui->nombreCliente->text(),ui->numeroTelefono->text(), ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales->currentText().toInt(), ui->dateEdit, ui->timeEdit)){
        QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");
    }else{
        QMessageBox::critical(this, "Uy...", "Hubo un fallo");
    }
}

