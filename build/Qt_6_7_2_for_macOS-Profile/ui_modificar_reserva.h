/********************************************************************************
** Form generated from reading UI file 'modificar_reserva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_RESERVA_H
#define UI_MODIFICAR_RESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_modifcarReserva
{
public:
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QPushButton *modificarButton;
    QPushButton *cancelarButton;

    void setupUi(QDialog *modifcarReserva)
    {
        if (modifcarReserva->objectName().isEmpty())
            modifcarReserva->setObjectName("modifcarReserva");
        modifcarReserva->resize(426, 274);
        modifcarReserva->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        label_5 = new QLabel(modifcarReserva);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 50, 311, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(45, 81, 40);\n"
"font: 700 24pt \"Georgia\";"));
        label_7 = new QLabel(modifcarReserva);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 130, 201, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_8 = new QLabel(modifcarReserva);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 170, 201, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        timeEdit = new QTimeEdit(modifcarReserva);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(260, 170, 118, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        dateEdit = new QDateEdit(modifcarReserva);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(260, 130, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        modificarButton = new QPushButton(modifcarReserva);
        modificarButton->setObjectName("modificarButton");
        modificarButton->setGeometry(QRect(240, 220, 111, 31));
        modificarButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"background-color: rgb(45, 81, 40);\n"
"color: white;\n"
""));
        cancelarButton = new QPushButton(modifcarReserva);
        cancelarButton->setObjectName("cancelarButton");
        cancelarButton->setGeometry(QRect(90, 220, 100, 32));
        cancelarButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"background-color: rgb(45, 81, 40);\n"
"color: white;\n"
"\n"
""));

        retranslateUi(modifcarReserva);

        QMetaObject::connectSlotsByName(modifcarReserva);
    } // setupUi

    void retranslateUi(QDialog *modifcarReserva)
    {
        modifcarReserva->setWindowTitle(QCoreApplication::translate("modifcarReserva", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("modifcarReserva", "MODIFICAR RESERVA", nullptr));
        label_7->setText(QCoreApplication::translate("modifcarReserva", "Fecha de Reserva: ", nullptr));
        label_8->setText(QCoreApplication::translate("modifcarReserva", "Hora de Reserva: ", nullptr));
        modificarButton->setText(QCoreApplication::translate("modifcarReserva", "MODIFICAR", nullptr));
        cancelarButton->setText(QCoreApplication::translate("modifcarReserva", "CANCELAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifcarReserva: public Ui_modifcarReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_RESERVA_H
