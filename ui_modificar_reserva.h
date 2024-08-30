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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_modifcarReserva
{
public:
    QComboBox *numeroComensales;
    QLineEdit *numeroTelefono;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *numeroComensales_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QPushButton *salirButton;
    QPushButton *modificarButton;
    QPushButton *cancelarButton;

    void setupUi(QDialog *modifcarReserva)
    {
        if (modifcarReserva->objectName().isEmpty())
            modifcarReserva->setObjectName("modifcarReserva");
        modifcarReserva->resize(470, 522);
        modifcarReserva->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(228, 235, 156);"));
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
        numeroComensales->setGeometry(QRect(260, 220, 103, 32));
        numeroComensales->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        numeroTelefono = new QLineEdit(modifcarReserva);
        numeroTelefono->setObjectName("numeroTelefono");
        numeroTelefono->setGeometry(QRect(230, 159, 191, 31));
        numeroTelefono->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(45, 81, 40);"));
        label_2 = new QLabel(modifcarReserva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 170, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_3 = new QLabel(modifcarReserva);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 230, 201, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_5 = new QLabel(modifcarReserva);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 80, 311, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(45, 81, 40);\n"
"font: 700 24pt \"Georgia\";"));
        numeroComensales_2 = new QComboBox(modifcarReserva);
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->addItem(QString());
        numeroComensales_2->setObjectName("numeroComensales_2");
        numeroComensales_2->setGeometry(QRect(260, 270, 103, 32));
        numeroComensales_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_4 = new QLabel(modifcarReserva);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 280, 201, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_7 = new QLabel(modifcarReserva);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 330, 201, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_8 = new QLabel(modifcarReserva);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 370, 201, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        timeEdit = new QTimeEdit(modifcarReserva);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(250, 370, 118, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        dateEdit = new QDateEdit(modifcarReserva);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(250, 330, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        salirButton = new QPushButton(modifcarReserva);
        salirButton->setObjectName("salirButton");
        salirButton->setGeometry(QRect(20, 20, 100, 32));
        salirButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        modificarButton = new QPushButton(modifcarReserva);
        modificarButton->setObjectName("modificarButton");
        modificarButton->setGeometry(QRect(250, 420, 111, 31));
        modificarButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        cancelarButton = new QPushButton(modifcarReserva);
        cancelarButton->setObjectName("cancelarButton");
        cancelarButton->setGeometry(QRect(100, 420, 100, 32));
        cancelarButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));

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
        label_3->setText(QCoreApplication::translate("modifcarReserva", "Numero de Comensales:", nullptr));
        label_5->setText(QCoreApplication::translate("modifcarReserva", "MODIFICAR RESERVA", nullptr));
        numeroComensales_2->setItemText(0, QCoreApplication::translate("modifcarReserva", "1", nullptr));
        numeroComensales_2->setItemText(1, QCoreApplication::translate("modifcarReserva", "2", nullptr));
        numeroComensales_2->setItemText(2, QCoreApplication::translate("modifcarReserva", "3", nullptr));
        numeroComensales_2->setItemText(3, QCoreApplication::translate("modifcarReserva", "4", nullptr));
        numeroComensales_2->setItemText(4, QCoreApplication::translate("modifcarReserva", "5", nullptr));
        numeroComensales_2->setItemText(5, QCoreApplication::translate("modifcarReserva", "6", nullptr));
        numeroComensales_2->setItemText(6, QCoreApplication::translate("modifcarReserva", "7", nullptr));
        numeroComensales_2->setItemText(7, QCoreApplication::translate("modifcarReserva", "8", nullptr));
        numeroComensales_2->setItemText(8, QCoreApplication::translate("modifcarReserva", "9", nullptr));
        numeroComensales_2->setItemText(9, QCoreApplication::translate("modifcarReserva", "10", nullptr));
        numeroComensales_2->setItemText(10, QCoreApplication::translate("modifcarReserva", "11", nullptr));
        numeroComensales_2->setItemText(11, QCoreApplication::translate("modifcarReserva", "12", nullptr));
        numeroComensales_2->setItemText(12, QCoreApplication::translate("modifcarReserva", "13", nullptr));
        numeroComensales_2->setItemText(13, QCoreApplication::translate("modifcarReserva", "14", nullptr));
        numeroComensales_2->setItemText(14, QCoreApplication::translate("modifcarReserva", "15", nullptr));
        numeroComensales_2->setItemText(15, QCoreApplication::translate("modifcarReserva", "16", nullptr));
        numeroComensales_2->setItemText(16, QCoreApplication::translate("modifcarReserva", "17", nullptr));
        numeroComensales_2->setItemText(17, QCoreApplication::translate("modifcarReserva", "18", nullptr));
        numeroComensales_2->setItemText(18, QCoreApplication::translate("modifcarReserva", "19", nullptr));
        numeroComensales_2->setItemText(19, QCoreApplication::translate("modifcarReserva", "20", nullptr));
        numeroComensales_2->setItemText(20, QCoreApplication::translate("modifcarReserva", "21", nullptr));
        numeroComensales_2->setItemText(21, QCoreApplication::translate("modifcarReserva", "22", nullptr));
        numeroComensales_2->setItemText(22, QCoreApplication::translate("modifcarReserva", "23", nullptr));
        numeroComensales_2->setItemText(23, QCoreApplication::translate("modifcarReserva", "24", nullptr));

        label_4->setText(QCoreApplication::translate("modifcarReserva", "Numero de Mesa: ", nullptr));
        label_7->setText(QCoreApplication::translate("modifcarReserva", "Fecha de Reserva: ", nullptr));
        label_8->setText(QCoreApplication::translate("modifcarReserva", "Hora de Reserva: ", nullptr));
        salirButton->setText(QCoreApplication::translate("modifcarReserva", "SALIR", nullptr));
        modificarButton->setText(QCoreApplication::translate("modifcarReserva", "MODIFICAR", nullptr));
        cancelarButton->setText(QCoreApplication::translate("modifcarReserva", "CANCELAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifcarReserva: public Ui_modifcarReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_RESERVA_H
