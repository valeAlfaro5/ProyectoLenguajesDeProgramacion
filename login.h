#ifndef LOGIN_H
#define LOGIN_H

#include "mainwindow.h"
#include "form.h"
#include <QDialog>
#include "databasemanager.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    bool validarCliente(int clienteID, const QString& telefono);
    int obtenerRolCliente(const QString& telefono);
    int obtenerClienteID(const QString& telefono);




private slots:

    void on_loginButton_clicked();

private:
    MainWindow main;
    Form formito;
    QSqlDatabase& db;
    QMessageBox msgBox;
    Ui::Login *ui;
};

#endif // LOGIN_H
