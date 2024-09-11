#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    db(DatabaseManager::instance().getDatabase())
{
    ui->setupUi(this);

    llenarTablaReservaciones(ui->tableWidget);
    /*

    db.setHostName("db4free.net");
    db.setPort(3306);
    db.setDatabaseName("holiwis");
    db.setUserName("kristycush");
    db.setPassword("Alavergawey");

    if (db.open()) {
        qDebug() << "Conectado!";

    } else {
        qDebug() << "Error: " << db.lastError().text();
    }
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::llenarTablaReservaciones(QTableWidget *tableWidget)
{
    // Setear Columnas
    tableWidget->setColumnCount(6);
    QStringList headers = {"Nombre", "Mesa", "Cantidad de Personas", "Fecha", "Hora", "Estatus"};
    tableWidget->setHorizontalHeaderLabels(headers);

    //Limpiar Rows existents
    tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare(R"(
        SELECT Cliente.nombre, Mesa.mesaID, Reservaciones.cantidadPersonas, Reservaciones.fecha,
               Reservaciones.hora, Reservaciones.activo
        FROM Reservaciones
        JOIN Cliente ON Reservaciones.clienteID = Cliente.clienteID
        JOIN Mesa ON Reservaciones.mesaID = Mesa.mesaID
    )");

    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return;
    }

    //Llenar resultados
    int row = 0;
    while (query.next()) {
        tableWidget->insertRow(row);

        QString nombre = query.value(0).toString();
        int mesaID = query.value(1).toInt();
        int cantidadPersonas = query.value(2).toInt();
        QDate fecha = query.value(3).toDate();
        QTime hora = query.value(4).toTime();
        bool activo = query.value(5).toBool();

        QString estatus="";
        if (activo == true){
            estatus = "Activo";
        }else{
            estatus = "Cancelado";
        }

        //QString estatus = activo ? "Activo" : "Cancelado";

        tableWidget->setItem(row, 0, new QTableWidgetItem(nombre));
        tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(mesaID)));
        tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(cantidadPersonas)));
        tableWidget->setItem(row, 3, new QTableWidgetItem(fecha.toString("yyyy-MM-dd")));
        tableWidget->setItem(row, 4, new QTableWidgetItem(hora.toString("hh:mm")));
        tableWidget->setItem(row, 5, new QTableWidgetItem(estatus));

        row++;
    }


    tableWidget->resizeColumnsToContents();
}

void MainWindow::on_actionSalir_2_triggered()
{
    this->setVisible(false);
}


void MainWindow::on_actionNueva_Reserva_2_triggered()
{
    formito.setVisible(true);
}


void MainWindow::on_actionModificar_Reserva_triggered()
{
    buscarReservacion.setVisible(true);
}


void MainWindow::on_actionCrear_Mesa_triggered()
{
    //crearMesa.setVisible(true);
    creacionMesa.setVisible(true);

}


void MainWindow::on_actionModificar_Mesa_triggered()
{
    manejoMesas.setVisible(true);
}

