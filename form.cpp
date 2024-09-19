#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->mesasDisponibles->setEnabled(false);
    ui->numeroComensales->setEnabled(false);
    ui->dateEdit->setDate(QDate::currentDate());
    QTime time(13,0);
    ui->timeEdit->setTime(time);
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
    ui->mesasDisponibles->setEnabled(true);
}


void Form::on_mesasDisponibles_activated(int index)
{
    hola.llenarComboBoxCapacidadMesa(ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales);
    ui->numeroComensales->setEnabled(true);
}


void Form::on_pushButton_2_clicked()
{
    if(hola.clienteExiste(ui->numeroTelefono->text()) == false && ui->nombreCliente->text().isEmpty()){
        QMessageBox::critical(this, "CHIVA!", "El cliente no existe. Tiene que ingresar un nombre.");
        return;
    }

    int numeroRetornado = hola.agregarReservacion(ui->nombreCliente->text(),ui->numeroTelefono->text(), ui->mesasDisponibles->currentText().toInt(), ui->numeroComensales->currentText().toInt(), ui->dateEdit, ui->timeEdit);
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
    /*
    if(){
        QMessageBox::information(this, "EXITO!", "Reserva creada con exito!");

        this->setVisible(false);
    }else{
        QMessageBox::critical(this, "Uy...", "Hubo un fallo");
    }
    */
}

