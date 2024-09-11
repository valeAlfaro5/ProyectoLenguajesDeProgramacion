/********************************************************************************
** Form generated from reading UI file 'crearmesas3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARMESAS3_H
#define UI_CREARMESAS3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearmesas3
{
public:
    QComboBox *cantidad;
    QLabel *label_3;
    QLineEdit *numeroMesa;
    QPushButton *crearMesita;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *crearmesas3)
    {
        if (crearmesas3->objectName().isEmpty())
            crearmesas3->setObjectName("crearmesas3");
        crearmesas3->resize(400, 476);
        cantidad = new QComboBox(crearmesas3);
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->setObjectName("cantidad");
        cantidad->setGeometry(QRect(100, 280, 103, 32));
        cantidad->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_3 = new QLabel(crearmesas3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 240, 191, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        numeroMesa = new QLineEdit(crearmesas3);
        numeroMesa->setObjectName("numeroMesa");
        numeroMesa->setGeometry(QRect(100, 190, 113, 21));
        crearMesita = new QPushButton(crearmesas3);
        crearMesita->setObjectName("crearMesita");
        crearMesita->setGeometry(QRect(99, 350, 111, 24));
        label_2 = new QLabel(crearmesas3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 181, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label = new QLabel(crearmesas3);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 60, 271, 61));
        label->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));

        retranslateUi(crearmesas3);

        QMetaObject::connectSlotsByName(crearmesas3);
    } // setupUi

    void retranslateUi(QWidget *crearmesas3)
    {
        crearmesas3->setWindowTitle(QCoreApplication::translate("crearmesas3", "Form", nullptr));
        cantidad->setItemText(0, QCoreApplication::translate("crearmesas3", "2", nullptr));
        cantidad->setItemText(1, QCoreApplication::translate("crearmesas3", "4", nullptr));
        cantidad->setItemText(2, QCoreApplication::translate("crearmesas3", "6", nullptr));
        cantidad->setItemText(3, QCoreApplication::translate("crearmesas3", "8", nullptr));
        cantidad->setItemText(4, QCoreApplication::translate("crearmesas3", "10", nullptr));

        label_3->setText(QCoreApplication::translate("crearmesas3", "Personas en Mesa: ", nullptr));
        crearMesita->setText(QCoreApplication::translate("crearmesas3", "Crear", nullptr));
        label_2->setText(QCoreApplication::translate("crearmesas3", "Numero de Mesa: ", nullptr));
        label->setText(QCoreApplication::translate("crearmesas3", "CREAR MESAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crearmesas3: public Ui_crearmesas3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARMESAS3_H
