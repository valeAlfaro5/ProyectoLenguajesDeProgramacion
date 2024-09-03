/********************************************************************************
** Form generated from reading UI file 'cancelarreserva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELARRESERVA_H
#define UI_CANCELARRESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_cancelarReserva
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *cancelarReserva)
    {
        if (cancelarReserva->objectName().isEmpty())
            cancelarReserva->setObjectName("cancelarReserva");
        cancelarReserva->resize(400, 300);
        buttonBox = new QDialogButtonBox(cancelarReserva);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(cancelarReserva);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, cancelarReserva, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, cancelarReserva, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(cancelarReserva);
    } // setupUi

    void retranslateUi(QDialog *cancelarReserva)
    {
        cancelarReserva->setWindowTitle(QCoreApplication::translate("cancelarReserva", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cancelarReserva: public Ui_cancelarReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELARRESERVA_H
