#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , db(DatabaseManager::instance().getDatabase()),
      ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

bool Login::validarCliente(int clienteID, const QString& telefono) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Cliente WHERE clienteID = :clienteID AND telefono = :telefono");
    query.bindValue(":clienteID", clienteID);
    query.bindValue(":telefono", telefono);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0; // Returns true if the client exists, false otherwise
    } else {
        qDebug() << "Error: Could not validate client -" << query.lastError().text();
        return false;
    }
}


void Login::on_loginButton_clicked()
{

    if(validarCliente(ui->nombreCliente->text().toInt(), ui->password->text())){

        //QMessageBox::information(this, "EXITO!", "Ha ingresado con exito al Restaurante!");
        main.show();
        //formito.show();
        this->setVisible(false);

    }else{

        QMessageBox::information(this, "ERROR!", "ClienteID y/o telefono incorrecto.");
    }

    /*
    if(ui->nombreCliente->text().isEmpty() && ui->password->text().isEmpty()){
        QMessageBox::information(this, "ERROR!", "El nombre del Cliente o la contraseña estan vacios.\nAsegurese de llenar todos los campos.");
    }else{
        QMessageBox::information(this, "EXITO!", "Ha ingresado con exito al Restaurante!");
        main.show();
        //formito.show();
        this->setVisible(false);
    }
*/
}

