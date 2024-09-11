/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *loginButton;
    QLineEdit *numeroCliente;
    QLineEdit *telefono;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 240, 100, 32));
        loginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);"));
        numeroCliente = new QLineEdit(Login);
        numeroCliente->setObjectName("numeroCliente");
        numeroCliente->setGeometry(QRect(180, 100, 161, 41));
        numeroCliente->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        telefono = new QLineEdit(Login);
        telefono->setObjectName("telefono");
        telefono->setGeometry(QRect(180, 160, 161, 41));
        telefono->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 120, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 170, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(45, 81, 40);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 700 14pt \"Georgia\";"));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 30, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"background-color: rgba(255, 255, 255, 0);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Numero:", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Telefono:", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
