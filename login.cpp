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
    if(ui->numeroCliente->text().isEmpty() || ui->telefono->text().isEmpty()){
        msgBox.setWindowTitle("ERROR!");
        msgBox.setText("Uno de los campos está vacío!");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStyleSheet("QLabel { color: red; }");
        msgBox.exec();
    }else{

    if(validarCliente(ui->numeroCliente->text().toInt(), ui->telefono->text())){

        main.show();
        this->setVisible(false);

    }else{
        msgBox.setWindowTitle("ERROR!");
        msgBox.setText("ClienteID y/o telefono incorrecto.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStyleSheet("QLabel { color: red; }");
        msgBox.exec();

    }

}
}
