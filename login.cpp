#include "login.h"
#include "ui_login.h"

#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_loginButton_clicked()
{
    if(ui->nombreCliente->text().isEmpty() && ui->password->text().isEmpty()){
        QMessageBox::information(this, "ERROR!", "El nombre del Cliente o la contraseña estan vacios.\nAsegurese de llenar todos los campos.");
    }else{
        QMessageBox::information(this, "EXITO!", "Ha ingresado con exito al Restaurante!");
        main.show();
        this->setVisible(false);
    }
}

