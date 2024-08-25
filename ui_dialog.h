/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nombreC
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateTimeEdit *fechaHora;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *mesasDisponibles;
    QComboBox *numeroComensales;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *nombreC)
    {
        if (nombreC->objectName().isEmpty())
            nombreC->setObjectName("nombreC");
        nombreC->resize(599, 446);
        nombreC->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 204, 204);"));
        label = new QLabel(nombreC);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 60, 341, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(nombreC);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 140, 131, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        label_3 = new QLabel(nombreC);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 180, 141, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        label_4 = new QLabel(nombreC);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 220, 151, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(nombreC);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 270, 161, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        fechaHora = new QDateTimeEdit(nombreC);
        fechaHora->setObjectName("fechaHora");
        fechaHora->setGeometry(QRect(300, 270, 201, 21));
        fechaHora->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(nombreC);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 180, 181, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(nombreC);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(310, 140, 181, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(nombreC);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(110, 330, 161, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        mesasDisponibles = new QComboBox(nombreC);
        mesasDisponibles->setObjectName("mesasDisponibles");
        mesasDisponibles->setGeometry(QRect(310, 320, 103, 32));
        numeroComensales = new QComboBox(nombreC);
        numeroComensales->setObjectName("numeroComensales");
        numeroComensales->setGeometry(QRect(310, 220, 103, 32));
        pushButton = new QPushButton(nombreC);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 380, 121, 32));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(nombreC);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 380, 121, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 0, 255);"));

        retranslateUi(nombreC);

        QMetaObject::connectSlotsByName(nombreC);
    } // setupUi

    void retranslateUi(QDialog *nombreC)
    {
        nombreC->setWindowTitle(QCoreApplication::translate("nombreC", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("nombreC", "CREA UNA RESERVA", nullptr));
        label_2->setText(QCoreApplication::translate("nombreC", "Nombre de Cliente: ", nullptr));
        label_3->setText(QCoreApplication::translate("nombreC", "Numero de Contacto:", nullptr));
        label_4->setText(QCoreApplication::translate("nombreC", "Numero de Comensales: ", nullptr));
        label_5->setText(QCoreApplication::translate("nombreC", "Fecha y Hora de Reserva: ", nullptr));
        label_7->setText(QCoreApplication::translate("nombreC", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("nombreC", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("nombreC", "Mesas Disponibles: ", nullptr));
        pushButton->setText(QCoreApplication::translate("nombreC", "Crear Reserva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("nombreC", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nombreC: public Ui_nombreC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
