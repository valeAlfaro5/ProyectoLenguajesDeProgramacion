/********************************************************************************
** Form generated from reading UI file 'crearmesas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARMESAS_H
#define UI_CREARMESAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_crearMesas
{
public:
    QPushButton *desactivarMesa;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_4;
    QPushButton *activarMesa;

    void setupUi(QDialog *crearMesas)
    {
        if (crearMesas->objectName().isEmpty())
            crearMesas->setObjectName("crearMesas");
        crearMesas->resize(474, 266);
        crearMesas->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        desactivarMesa = new QPushButton(crearMesas);
        desactivarMesa->setObjectName("desactivarMesa");
        desactivarMesa->setGeometry(QRect(100, 190, 111, 51));
        desactivarMesa->setStyleSheet(QString::fromUtf8("background-color: rgba(148, 17, 0, 234);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(crearMesas);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 110, 181, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        comboBox = new QComboBox(crearMesas);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(160, 150, 121, 24));
        label_4 = new QLabel(crearMesas);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 30, 321, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        activarMesa = new QPushButton(crearMesas);
        activarMesa->setObjectName("activarMesa");
        activarMesa->setGeometry(QRect(240, 190, 111, 51));
        activarMesa->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);\n"
"color: white;"));

        retranslateUi(crearMesas);

        QMetaObject::connectSlotsByName(crearMesas);
    } // setupUi

    void retranslateUi(QDialog *crearMesas)
    {
        crearMesas->setWindowTitle(QCoreApplication::translate("crearMesas", "Dialog", nullptr));
        desactivarMesa->setText(QCoreApplication::translate("crearMesas", "Desactivar", nullptr));
        label_5->setText(QCoreApplication::translate("crearMesas", "Numero de Mesa: ", nullptr));
        label_4->setText(QCoreApplication::translate("crearMesas", "MANEJAR MESAS", nullptr));
        activarMesa->setText(QCoreApplication::translate("crearMesas", "Activar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crearMesas: public Ui_crearMesas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARMESAS_H
