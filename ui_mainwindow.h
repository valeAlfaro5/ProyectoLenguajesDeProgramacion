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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QAction *actionCrear_Mesa;
    QAction *actionModificar_Mesa;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuReservas;
    QMenu *menuMesas;
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
        actionCrear_Mesa = new QAction(MainWindow);
        actionCrear_Mesa->setObjectName("actionCrear_Mesa");
        actionModificar_Mesa = new QAction(MainWindow);
        actionModificar_Mesa->setObjectName("actionModificar_Mesa");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        calendarWidget = new QCalendarWidget(widget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(0, 140, 371, 271));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 40, 221, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 24pt \"Georgia\";"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(390, 130, 411, 321));
        tab = new QWidget();
        tab->setObjectName("tab");
        listWidget = new QListWidget(tab);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(15, 10, 311, 241));
        listWidget->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Georgia\";\n"
"color:rgb(255, 255, 255)"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 381, 261));
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Georgia\";"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 842, 24));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuReservas = new QMenu(menuMenu);
        menuReservas->setObjectName("menuReservas");
        menuMesas = new QMenu(menuMenu);
        menuMesas->setObjectName("menuMesas");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuReservas->menuAction());
        menuMenu->addAction(menuMesas->menuAction());
        menuMenu->addAction(actionSalir_2);
        menuReservas->addAction(actionNueva_Reserva_2);
        menuReservas->addAction(actionModificar_Reserva);
        menuMesas->addAction(actionCrear_Mesa);
        menuMesas->addAction(actionModificar_Mesa);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        actionCrear_Mesa->setText(QCoreApplication::translate("MainWindow", "Crear Mesa", nullptr));
        actionModificar_Mesa->setText(QCoreApplication::translate("MainWindow", "Modificar Mesa", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RESTAURANTE", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "RESEVA 5", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "RESERVA 3", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Mesa", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Personas", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Hora", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuReservas->setTitle(QCoreApplication::translate("MainWindow", "Reservas", nullptr));
        menuMesas->setTitle(QCoreApplication::translate("MainWindow", "Mesas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
