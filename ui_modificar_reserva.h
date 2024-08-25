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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_modifcarReserva
{
public:
    QDateTimeEdit *fechaHora;
    QComboBox *numeroComensales;
    QDialogButtonBox *buttonBox_2;
    QLineEdit *numeroTelefono;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *modifcarReserva)
    {
        if (modifcarReserva->objectName().isEmpty())
            modifcarReserva->setObjectName("modifcarReserva");
        modifcarReserva->resize(513, 389);
        modifcarReserva->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);"));
        fechaHora = new QDateTimeEdit(modifcarReserva);
        fechaHora->setObjectName("fechaHora");
        fechaHora->setGeometry(QRect(270, 230, 194, 22));
        numeroComensales = new QComboBox(modifcarReserva);
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
        numeroComensales->setGeometry(QRect(270, 170, 103, 32));
        buttonBox_2 = new QDialogButtonBox(modifcarReserva);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setGeometry(QRect(0, 280, 341, 32));
        buttonBox_2->setOrientation(Qt::Orientation::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        numeroTelefono = new QLineEdit(modifcarReserva);
        numeroTelefono->setObjectName("numeroTelefono");
        numeroTelefono->setGeometry(QRect(240, 109, 191, 31));
        label_2 = new QLabel(modifcarReserva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 120, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        label_4 = new QLabel(modifcarReserva);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 230, 201, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        label_3 = new QLabel(modifcarReserva);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 180, 201, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(228, 235, 156);"));
        label_5 = new QLabel(modifcarReserva);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 40, 311, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(228, 235, 156);\n"
"font: 700 24pt \"Georgia\";"));

        retranslateUi(modifcarReserva);

        QMetaObject::connectSlotsByName(modifcarReserva);
    } // setupUi

    void retranslateUi(QDialog *modifcarReserva)
    {
        modifcarReserva->setWindowTitle(QCoreApplication::translate("modifcarReserva", "Dialog", nullptr));
        numeroComensales->setItemText(0, QCoreApplication::translate("modifcarReserva", "1", nullptr));
        numeroComensales->setItemText(1, QCoreApplication::translate("modifcarReserva", "2", nullptr));
        numeroComensales->setItemText(2, QCoreApplication::translate("modifcarReserva", "3", nullptr));
        numeroComensales->setItemText(3, QCoreApplication::translate("modifcarReserva", "4", nullptr));
        numeroComensales->setItemText(4, QCoreApplication::translate("modifcarReserva", "5", nullptr));
        numeroComensales->setItemText(5, QCoreApplication::translate("modifcarReserva", "6", nullptr));
        numeroComensales->setItemText(6, QCoreApplication::translate("modifcarReserva", "7", nullptr));
        numeroComensales->setItemText(7, QCoreApplication::translate("modifcarReserva", "8", nullptr));
        numeroComensales->setItemText(8, QCoreApplication::translate("modifcarReserva", "9", nullptr));
        numeroComensales->setItemText(9, QCoreApplication::translate("modifcarReserva", "10", nullptr));
        numeroComensales->setItemText(10, QCoreApplication::translate("modifcarReserva", "11", nullptr));
        numeroComensales->setItemText(11, QCoreApplication::translate("modifcarReserva", "12", nullptr));
        numeroComensales->setItemText(12, QCoreApplication::translate("modifcarReserva", "13", nullptr));
        numeroComensales->setItemText(13, QCoreApplication::translate("modifcarReserva", "14", nullptr));
        numeroComensales->setItemText(14, QCoreApplication::translate("modifcarReserva", "15", nullptr));
        numeroComensales->setItemText(15, QCoreApplication::translate("modifcarReserva", "16", nullptr));
        numeroComensales->setItemText(16, QCoreApplication::translate("modifcarReserva", "17", nullptr));
        numeroComensales->setItemText(17, QCoreApplication::translate("modifcarReserva", "18", nullptr));
        numeroComensales->setItemText(18, QCoreApplication::translate("modifcarReserva", "19", nullptr));
        numeroComensales->setItemText(19, QCoreApplication::translate("modifcarReserva", "20", nullptr));
        numeroComensales->setItemText(20, QCoreApplication::translate("modifcarReserva", "21", nullptr));
        numeroComensales->setItemText(21, QCoreApplication::translate("modifcarReserva", "22", nullptr));
        numeroComensales->setItemText(22, QCoreApplication::translate("modifcarReserva", "23", nullptr));
        numeroComensales->setItemText(23, QCoreApplication::translate("modifcarReserva", "24", nullptr));

        label_2->setText(QCoreApplication::translate("modifcarReserva", "Numero de Contacto:", nullptr));
        label_4->setText(QCoreApplication::translate("modifcarReserva", "Fecha y Hora de Reserva:", nullptr));
        label_3->setText(QCoreApplication::translate("modifcarReserva", "Numero de Comensales:", nullptr));
        label_5->setText(QCoreApplication::translate("modifcarReserva", "MODIFICAR RESERVA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifcarReserva: public Ui_modifcarReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_RESERVA_H
