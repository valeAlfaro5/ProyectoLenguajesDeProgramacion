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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

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
    QDateTimeEdit *fechaHora;
    QLabel *label_5;

    void setupUi(QDialog *NuevaReserva)
    {
        if (NuevaReserva->objectName().isEmpty())
            NuevaReserva->setObjectName("NuevaReserva");
        NuevaReserva->resize(468, 367);
        NuevaReserva->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);"));
        buttonBox = new QDialogButtonBox(NuevaReserva);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-20, 320, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        nombreCliente = new QLineEdit(NuevaReserva);
        nombreCliente->setObjectName("nombreCliente");
        nombreCliente->setGeometry(QRect(220, 110, 191, 31));
        numeroTelefono = new QLineEdit(NuevaReserva);
        numeroTelefono->setObjectName("numeroTelefono");
        numeroTelefono->setGeometry(QRect(220, 159, 191, 31));
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
        numeroComensales->setGeometry(QRect(250, 220, 103, 32));
        label = new QLabel(NuevaReserva);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 151, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        label_2 = new QLabel(NuevaReserva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 170, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        label_3 = new QLabel(NuevaReserva);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 230, 201, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);\n"
""));
        label_4 = new QLabel(NuevaReserva);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 280, 201, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        fechaHora = new QDateTimeEdit(NuevaReserva);
        fechaHora->setObjectName("fechaHora");
        fechaHora->setGeometry(QRect(250, 280, 194, 22));
        label_5 = new QLabel(NuevaReserva);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 30, 231, 41));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));

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
        label_4->setText(QCoreApplication::translate("NuevaReserva", "Fecha y Hora de Reserva:", nullptr));
        label_5->setText(QCoreApplication::translate("NuevaReserva", "Nueva Reserva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NuevaReserva: public Ui_NuevaReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVARESERVA_H
