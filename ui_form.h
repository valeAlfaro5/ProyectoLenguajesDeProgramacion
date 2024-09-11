/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *mesasDisponibles;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QComboBox *numeroComensales;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *nombreCliente;
    QLineEdit *numeroTelefono;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(669, 493);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 232, 208);\n"
""));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 390, 241, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"\n"
""));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 230, 201, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        mesasDisponibles = new QComboBox(Form);
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
        mesasDisponibles->setGeometry(QRect(380, 330, 103, 32));
        mesasDisponibles->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        mesasDisponibles->setMaxVisibleItems(20);
        mesasDisponibles->setMinimumContentsLength(0);
        dateEdit = new QDateEdit(Form);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(390, 230, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 180, 211, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        numeroComensales = new QComboBox(Form);
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
        numeroComensales->setGeometry(QRect(380, 380, 103, 32));
        numeroComensales->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_7 = new QLabel(Form);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 340, 201, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
"\n"
""));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 130, 201, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_6 = new QLabel(Form);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 280, 201, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 40, 311, 41));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        nombreCliente = new QLineEdit(Form);
        nombreCliente->setObjectName("nombreCliente");
        nombreCliente->setGeometry(QRect(340, 120, 191, 31));
        nombreCliente->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);"));
        numeroTelefono = new QLineEdit(Form);
        numeroTelefono->setObjectName("numeroTelefono");
        numeroTelefono->setGeometry(QRect(340, 169, 191, 31));
        numeroTelefono->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        timeEdit = new QTimeEdit(Form);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(390, 280, 118, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(540, 280, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);"));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 440, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 81, 40);"));

        retranslateUi(Form);

        mesasDisponibles->setCurrentIndex(-1);
        numeroComensales->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Numero de Comensales:", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Fecha de Reserva:", nullptr));
        mesasDisponibles->setItemText(0, QCoreApplication::translate("Form", "1", nullptr));
        mesasDisponibles->setItemText(1, QCoreApplication::translate("Form", "2", nullptr));
        mesasDisponibles->setItemText(2, QCoreApplication::translate("Form", "3", nullptr));
        mesasDisponibles->setItemText(3, QCoreApplication::translate("Form", "4", nullptr));
        mesasDisponibles->setItemText(4, QCoreApplication::translate("Form", "5", nullptr));
        mesasDisponibles->setItemText(5, QCoreApplication::translate("Form", "6", nullptr));
        mesasDisponibles->setItemText(6, QCoreApplication::translate("Form", "7", nullptr));
        mesasDisponibles->setItemText(7, QCoreApplication::translate("Form", "8", nullptr));
        mesasDisponibles->setItemText(8, QCoreApplication::translate("Form", "9", nullptr));
        mesasDisponibles->setItemText(9, QCoreApplication::translate("Form", "10", nullptr));
        mesasDisponibles->setItemText(10, QCoreApplication::translate("Form", "11", nullptr));
        mesasDisponibles->setItemText(11, QCoreApplication::translate("Form", "12", nullptr));
        mesasDisponibles->setItemText(12, QCoreApplication::translate("Form", "13", nullptr));
        mesasDisponibles->setItemText(13, QCoreApplication::translate("Form", "14", nullptr));
        mesasDisponibles->setItemText(14, QCoreApplication::translate("Form", "15", nullptr));
        mesasDisponibles->setItemText(15, QCoreApplication::translate("Form", "16", nullptr));
        mesasDisponibles->setItemText(16, QCoreApplication::translate("Form", "17", nullptr));
        mesasDisponibles->setItemText(17, QCoreApplication::translate("Form", "18", nullptr));
        mesasDisponibles->setItemText(18, QCoreApplication::translate("Form", "19", nullptr));
        mesasDisponibles->setItemText(19, QCoreApplication::translate("Form", "20", nullptr));
        mesasDisponibles->setItemText(20, QCoreApplication::translate("Form", "21", nullptr));
        mesasDisponibles->setItemText(21, QCoreApplication::translate("Form", "22", nullptr));
        mesasDisponibles->setItemText(22, QCoreApplication::translate("Form", "23", nullptr));
        mesasDisponibles->setItemText(23, QCoreApplication::translate("Form", "24", nullptr));

        mesasDisponibles->setCurrentText(QString());
        label_2->setText(QCoreApplication::translate("Form", "Numero de Contacto:", nullptr));
        numeroComensales->setItemText(0, QCoreApplication::translate("Form", "1", nullptr));
        numeroComensales->setItemText(1, QCoreApplication::translate("Form", "2", nullptr));
        numeroComensales->setItemText(2, QCoreApplication::translate("Form", "3", nullptr));
        numeroComensales->setItemText(3, QCoreApplication::translate("Form", "4", nullptr));
        numeroComensales->setItemText(4, QCoreApplication::translate("Form", "5", nullptr));
        numeroComensales->setItemText(5, QCoreApplication::translate("Form", "6", nullptr));
        numeroComensales->setItemText(6, QCoreApplication::translate("Form", "7", nullptr));
        numeroComensales->setItemText(7, QCoreApplication::translate("Form", "8", nullptr));
        numeroComensales->setItemText(8, QCoreApplication::translate("Form", "9", nullptr));
        numeroComensales->setItemText(9, QCoreApplication::translate("Form", "10", nullptr));
        numeroComensales->setItemText(10, QCoreApplication::translate("Form", "11", nullptr));
        numeroComensales->setItemText(11, QCoreApplication::translate("Form", "12", nullptr));
        numeroComensales->setItemText(12, QCoreApplication::translate("Form", "13", nullptr));
        numeroComensales->setItemText(13, QCoreApplication::translate("Form", "14", nullptr));
        numeroComensales->setItemText(14, QCoreApplication::translate("Form", "15", nullptr));
        numeroComensales->setItemText(15, QCoreApplication::translate("Form", "16", nullptr));
        numeroComensales->setItemText(16, QCoreApplication::translate("Form", "17", nullptr));
        numeroComensales->setItemText(17, QCoreApplication::translate("Form", "18", nullptr));
        numeroComensales->setItemText(18, QCoreApplication::translate("Form", "19", nullptr));
        numeroComensales->setItemText(19, QCoreApplication::translate("Form", "20", nullptr));
        numeroComensales->setItemText(20, QCoreApplication::translate("Form", "21", nullptr));
        numeroComensales->setItemText(21, QCoreApplication::translate("Form", "22", nullptr));
        numeroComensales->setItemText(22, QCoreApplication::translate("Form", "23", nullptr));
        numeroComensales->setItemText(23, QCoreApplication::translate("Form", "24", nullptr));

        label_7->setText(QCoreApplication::translate("Form", "Mesas Disponibles: ", nullptr));
        label->setText(QCoreApplication::translate("Form", "Nombre de Cliente:", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Hora de Reserva:", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "NUEVA RESERVA", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "Validar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "Crear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
