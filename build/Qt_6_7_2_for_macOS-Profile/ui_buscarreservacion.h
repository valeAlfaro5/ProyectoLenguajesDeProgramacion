/********************************************************************************
** Form generated from reading UI file 'buscarreservacion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARRESERVACION_H
#define UI_BUSCARRESERVACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_buscarReservacion
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *numeroReserva;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *buscarReservacion)
    {
        if (buscarReservacion->objectName().isEmpty())
            buscarReservacion->setObjectName("buscarReservacion");
        buscarReservacion->resize(383, 253);
        buscarReservacion->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        buttonBox = new QDialogButtonBox(buscarReservacion);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-70, 190, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        numeroReserva = new QLineEdit(buscarReservacion);
        numeroReserva->setObjectName("numeroReserva");
        numeroReserva->setGeometry(QRect(100, 140, 191, 31));
        numeroReserva->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(45, 81, 40);"));
        label_6 = new QLabel(buscarReservacion);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 100, 151, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_7 = new QLabel(buscarReservacion);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 40, 251, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));

        retranslateUi(buscarReservacion);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, buscarReservacion, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, buscarReservacion, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(buscarReservacion);
    } // setupUi

    void retranslateUi(QDialog *buscarReservacion)
    {
        buscarReservacion->setWindowTitle(QCoreApplication::translate("buscarReservacion", "Dialog", nullptr));
        numeroReserva->setText(QString());
        label_6->setText(QCoreApplication::translate("buscarReservacion", "Numero de Reserva:", nullptr));
        label_7->setText(QCoreApplication::translate("buscarReservacion", "BUSCAR RESERVA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarReservacion: public Ui_buscarReservacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARRESERVACION_H
