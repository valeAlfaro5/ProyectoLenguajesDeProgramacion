/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalir;
    QAction *actionNueva_Reserva_2;
    QAction *actionModificar_Reserva;
    QAction *actionCancelar_Reserva;
    QAction *actionSalir_2;
    QWidget *centralwidget;
    QWidget *widget;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuReservas;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(842, 614);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 123, 47);"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName("actionSalir");
        actionNueva_Reserva_2 = new QAction(MainWindow);
        actionNueva_Reserva_2->setObjectName("actionNueva_Reserva_2");
        actionModificar_Reserva = new QAction(MainWindow);
        actionModificar_Reserva->setObjectName("actionModificar_Reserva");
        actionCancelar_Reserva = new QAction(MainWindow);
        actionCancelar_Reserva->setObjectName("actionCancelar_Reserva");
        actionSalir_2 = new QAction(MainWindow);
        actionSalir_2->setObjectName("actionSalir_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 20, 771, 511));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 842, 24));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuReservas = new QMenu(menuMenu);
        menuReservas->setObjectName("menuReservas");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuReservas->menuAction());
        menuMenu->addAction(actionSalir_2);
        menuReservas->addAction(actionNueva_Reserva_2);
        menuReservas->addAction(actionModificar_Reserva);
        menuReservas->addAction(actionCancelar_Reserva);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Mesas ", nullptr));
        actionNueva_Reserva_2->setText(QCoreApplication::translate("MainWindow", "Nueva Reserva", nullptr));
        actionModificar_Reserva->setText(QCoreApplication::translate("MainWindow", "Modificar Reserva", nullptr));
        actionCancelar_Reserva->setText(QCoreApplication::translate("MainWindow", "Cancelar Reserva", nullptr));
        actionSalir_2->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuReservas->setTitle(QCoreApplication::translate("MainWindow", "Reservas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
