/********************************************************************************
** Form generated from reading UI file 'nuevareserva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVARESERVA_H
#define UI_NUEVARESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_NuevaReserva
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *nombreCliente;
    QLineEdit *numeroTelefono;
    QComboBox *numeroComensales;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QLabel *label_7;
    QComboBox *mesasDisponibles;

    void setupUi(QDialog *NuevaReserva)
    {
        if (NuevaReserva->objectName().isEmpty())
            NuevaReserva->setObjectName("NuevaReserva");
        NuevaReserva->resize(470, 489);
        NuevaReserva->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        buttonBox = new QDialogButtonBox(NuevaReserva);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-30, 440, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"background-color: rgb(45, 81, 40);\n"
""));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::NoButton);
        nombreCliente = new QLineEdit(NuevaReserva);
        nombreCliente->setObjectName("nombreCliente");
        nombreCliente->setGeometry(QRect(220, 110, 191, 31));
        nombreCliente->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        numeroTelefono = new QLineEdit(NuevaReserva);
        numeroTelefono->setObjectName("numeroTelefono");
        numeroTelefono->setGeometry(QRect(220, 159, 191, 31));
        numeroTelefono->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        numeroComensales = new QComboBox(NuevaReserva);
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->addItem(QString());
        numeroComensales->setObjectName("numeroComensales");
        numeroComensales->setGeometry(QRect(260, 370, 103, 32));
        numeroComensales->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label = new QLabel(NuevaReserva);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 151, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_2 = new QLabel(NuevaReserva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 170, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_3 = new QLabel(NuevaReserva);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 380, 201, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"\n"
""));
        label_4 = new QLabel(NuevaReserva);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 220, 201, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_5 = new QLabel(NuevaReserva);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 30, 231, 41));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        dateEdit = new QDateEdit(NuevaReserva);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(280, 220, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_6 = new QLabel(NuevaReserva);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 270, 201, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        timeEdit = new QTimeEdit(NuevaReserva);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(270, 270, 118, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_7 = new QLabel(NuevaReserva);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 330, 201, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"\n"
""));
        mesasDisponibles = new QComboBox(NuevaReserva);
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->addItem(QString());
        mesasDisponibles->setObjectName("mesasDisponibles");
        mesasDisponibles->setGeometry(QRect(260, 320, 103, 32));
        mesasDisponibles->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));

        retranslateUi(NuevaReserva);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NuevaReserva, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NuevaReserva, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NuevaReserva);
    } // setupUi

    void retranslateUi(QDialog *NuevaReserva)
    {
        NuevaReserva->setWindowTitle(QCoreApplication::translate("NuevaReserva", "Dialog", nullptr));
        numeroComensales->setItemText(0, QCoreApplication::translate("NuevaReserva", "1", nullptr));
        numeroComensales->setItemText(1, QCoreApplication::translate("NuevaReserva", "2", nullptr));
        numeroComensales->setItemText(2, QCoreApplication::translate("NuevaReserva", "3", nullptr));
        numeroComensales->setItemText(3, QCoreApplication::translate("NuevaReserva", "4", nullptr));
        numeroComensales->setItemText(4, QCoreApplication::translate("NuevaReserva", "5", nullptr));
        numeroComensales->setItemText(5, QCoreApplication::translate("NuevaReserva", "6", nullptr));
        numeroComensales->setItemText(6, QCoreApplication::translate("NuevaReserva", "7", nullptr));
        numeroComensales->setItemText(7, QCoreApplication::translate("NuevaReserva", "8", nullptr));
        numeroComensales->setItemText(8, QCoreApplication::translate("NuevaReserva", "9", nullptr));
        numeroComensales->setItemText(9, QCoreApplication::translate("NuevaReserva", "10", nullptr));
        numeroComensales->setItemText(10, QCoreApplication::translate("NuevaReserva", "11", nullptr));
        numeroComensales->setItemText(11, QCoreApplication::translate("NuevaReserva", "12", nullptr));
        numeroComensales->setItemText(12, QCoreApplication::translate("NuevaReserva", "13", nullptr));
        numeroComensales->setItemText(13, QCoreApplication::translate("NuevaReserva", "14", nullptr));
        numeroComensales->setItemText(14, QCoreApplication::translate("NuevaReserva", "15", nullptr));
        numeroComensales->setItemText(15, QCoreApplication::translate("NuevaReserva", "16", nullptr));
        numeroComensales->setItemText(16, QCoreApplication::translate("NuevaReserva", "17", nullptr));
        numeroComensales->setItemText(17, QCoreApplication::translate("NuevaReserva", "18", nullptr));
        numeroComensales->setItemText(18, QCoreApplication::translate("NuevaReserva", "19", nullptr));
        numeroComensales->setItemText(19, QCoreApplication::translate("NuevaReserva", "20", nullptr));
        numeroComensales->setItemText(20, QCoreApplication::translate("NuevaReserva", "21", nullptr));
        numeroComensales->setItemText(21, QCoreApplication::translate("NuevaReserva", "22", nullptr));
        numeroComensales->setItemText(22, QCoreApplication::translate("NuevaReserva", "23", nullptr));
        numeroComensales->setItemText(23, QCoreApplication::translate("NuevaReserva", "24", nullptr));

        label->setText(QCoreApplication::translate("NuevaReserva", "Nombre de Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("NuevaReserva", "Numero de Contacto:", nullptr));
        label_3->setText(QCoreApplication::translate("NuevaReserva", "Numero de Comensales:", nullptr));
        label_4->setText(QCoreApplication::translate("NuevaReserva", "Fecha de Reserva:", nullptr));
        label_5->setText(QCoreApplication::translate("NuevaReserva", "NUEVA RESERVA", nullptr));
        label_6->setText(QCoreApplication::translate("NuevaReserva", "Hora de Reserva:", nullptr));
        label_7->setText(QCoreApplication::translate("NuevaReserva", "Mesas Disponibles: ", nullptr));
        mesasDisponibles->setItemText(0, QCoreApplication::translate("NuevaReserva", "1", nullptr));
        mesasDisponibles->setItemText(1, QCoreApplication::translate("NuevaReserva", "2", nullptr));
        mesasDisponibles->setItemText(2, QCoreApplication::translate("NuevaReserva", "3", nullptr));
        mesasDisponibles->setItemText(3, QCoreApplication::translate("NuevaReserva", "4", nullptr));
        mesasDisponibles->setItemText(4, QCoreApplication::translate("NuevaReserva", "5", nullptr));
        mesasDisponibles->setItemText(5, QCoreApplication::translate("NuevaReserva", "6", nullptr));
        mesasDisponibles->setItemText(6, QCoreApplication::translate("NuevaReserva", "7", nullptr));
        mesasDisponibles->setItemText(7, QCoreApplication::translate("NuevaReserva", "8", nullptr));
        mesasDisponibles->setItemText(8, QCoreApplication::translate("NuevaReserva", "9", nullptr));
        mesasDisponibles->setItemText(9, QCoreApplication::translate("NuevaReserva", "10", nullptr));
        mesasDisponibles->setItemText(10, QCoreApplication::translate("NuevaReserva", "11", nullptr));
        mesasDisponibles->setItemText(11, QCoreApplication::translate("NuevaReserva", "12", nullptr));
        mesasDisponibles->setItemText(12, QCoreApplication::translate("NuevaReserva", "13", nullptr));
        mesasDisponibles->setItemText(13, QCoreApplication::translate("NuevaReserva", "14", nullptr));
        mesasDisponibles->setItemText(14, QCoreApplication::translate("NuevaReserva", "15", nullptr));
        mesasDisponibles->setItemText(15, QCoreApplication::translate("NuevaReserva", "16", nullptr));
        mesasDisponibles->setItemText(16, QCoreApplication::translate("NuevaReserva", "17", nullptr));
        mesasDisponibles->setItemText(17, QCoreApplication::translate("NuevaReserva", "18", nullptr));
        mesasDisponibles->setItemText(18, QCoreApplication::translate("NuevaReserva", "19", nullptr));
        mesasDisponibles->setItemText(19, QCoreApplication::translate("NuevaReserva", "20", nullptr));
        mesasDisponibles->setItemText(20, QCoreApplication::translate("NuevaReserva", "21", nullptr));
        mesasDisponibles->setItemText(21, QCoreApplication::translate("NuevaReserva", "22", nullptr));
        mesasDisponibles->setItemText(22, QCoreApplication::translate("NuevaReserva", "23", nullptr));
        mesasDisponibles->setItemText(23, QCoreApplication::translate("NuevaReserva", "24", nullptr));

    } // retranslateUi

};

namespace Ui {
    class NuevaReserva: public Ui_NuevaReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVARESERVA_H
