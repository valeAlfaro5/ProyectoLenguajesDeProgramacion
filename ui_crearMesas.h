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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_crearMesas
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cantidad;
    QLineEdit *numeroMesa;

    void setupUi(QDialog *crearMesas)
    {
        if (crearMesas->objectName().isEmpty())
            crearMesas->setObjectName("crearMesas");
        crearMesas->resize(455, 296);
        crearMesas->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(228, 235, 156);"));
        buttonBox = new QDialogButtonBox(crearMesas);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(310, 140, 111, 71));
        buttonBox->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(crearMesas);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 211, 61));
        label->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_2 = new QLabel(crearMesas);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 100, 141, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        label_3 = new QLabel(crearMesas);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 200, 141, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        cantidad = new QComboBox(crearMesas);
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->addItem(QString());
        cantidad->setObjectName("cantidad");
        cantidad->setGeometry(QRect(110, 240, 103, 32));
        cantidad->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color: rgb(45, 81, 40);\n"
""));
        numeroMesa = new QLineEdit(crearMesas);
        numeroMesa->setObjectName("numeroMesa");
        numeroMesa->setGeometry(QRect(110, 150, 113, 21));

        retranslateUi(crearMesas);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, crearMesas, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, crearMesas, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(crearMesas);
    } // setupUi

    void retranslateUi(QDialog *crearMesas)
    {
        crearMesas->setWindowTitle(QCoreApplication::translate("crearMesas", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("crearMesas", "CREAR MESAS", nullptr));
        label_2->setText(QCoreApplication::translate("crearMesas", "Numero de Mesa: ", nullptr));
        label_3->setText(QCoreApplication::translate("crearMesas", "Personas en Mesa: ", nullptr));
        cantidad->setItemText(0, QCoreApplication::translate("crearMesas", "2", nullptr));
        cantidad->setItemText(1, QCoreApplication::translate("crearMesas", "4", nullptr));
        cantidad->setItemText(2, QCoreApplication::translate("crearMesas", "6", nullptr));
        cantidad->setItemText(3, QCoreApplication::translate("crearMesas", "8", nullptr));
        cantidad->setItemText(4, QCoreApplication::translate("crearMesas", "10", nullptr));

    } // retranslateUi

};

namespace Ui {
    class crearMesas: public Ui_crearMesas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARMESAS_H
