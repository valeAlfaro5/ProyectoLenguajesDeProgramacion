#include "login.h"
#include "ui_login.h"
#include "ui_mainwindow.h"
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

int Login::obtenerRolCliente(const QString &telefono)
{
    QSqlQuery query(DatabaseManager::instance().getDatabase());


    query.prepare("SELECT rol FROM Cliente WHERE telefono = :telefono");
    query.bindValue(":telefono", telefono);

    if (!query.exec()) {
        qDebug() << "Error :" << query.lastError().text();
        return -1;
    }

    if (query.next()) {
        int rol = query.value(0).toInt();
        return rol;
    } else {
        qDebug() << "Cliente con telefono " << telefono << " no encontrado.";
        return -1;
    }
}

int Login::obtenerClienteID(const QString &telefono)
{
    QSqlQuery query;

    query.prepare("SELECT clienteID FROM Cliente WHERE telefono = :telefono");
    query.bindValue(":telefono", telefono);

    if (!query.exec()) {
        qDebug() << "Error executing query to get clienteID:" << query.lastError().text();
        return -1;
    }

    if (query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Cliente con telefono " << telefono << " no encontrado.";
        return -1;
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

        main.rol = obtenerRolCliente(ui->telefono->text());
        main.clienteID = obtenerClienteID(ui->telefono->text());
        main.telefono = ui->telefono->text();
        main.llenarTablaReservacionesPorCliente(main.clienteID, main.ui->tableWidget);
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
