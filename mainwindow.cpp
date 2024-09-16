#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_manejarmesas2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    db(DatabaseManager::instance().getDatabase())
{
    ui->setupUi(this);
    rol=-1;
    clienteID = -1;
    telefono = "";
    actualizarReservas();
    llenarTablaReservaciones(ui->tableWidget);
    llenarComboBoxMesas(ui->comboBox);
    llenarTablaMesas(ui->tableWidget_3);


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
    // Set column headers for the table
    tableWidget->setColumnCount(7); // 6 columns: Nombre, ReservaID, Mesa, Cantidad de Personas, Fecha, Hora, Estatus
    QStringList headers = {"Nombre", "ReservaID", "Mesa", "Cantidad de Personas", "Fecha", "Hora", "Estatus"};
    tableWidget->setHorizontalHeaderLabels(headers);

    // Clear any existing rows
    tableWidget->setRowCount(0);

    QSqlQuery query(DatabaseManager::instance().getDatabase());

    // Query to get reservation details
    query.prepare(R"(
        SELECT Cliente.nombre, Reservaciones.reservaID, Reservaciones.mesaID, Reservaciones.cantidadPersonas, Reservaciones.fecha, Reservaciones.hora, Reservaciones.activo
        FROM Reservaciones
        INNER JOIN Cliente ON Reservaciones.clienteID = Cliente.clienteID
    )");

    if (!query.exec()) {
        qDebug() << "Error fetching reservation data:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        QString nombre = query.value(0).toString();
        int reservaID = query.value(1).toInt();
        int mesaID = query.value(2).toInt();
        int cantidadPersonas = query.value(3).toInt();
        QDate fecha = query.value(4).toDate();
        QTime hora = query.value(5).toTime();
        bool activo = query.value(6).toBool();
        QString estatus = "";

        if(activo == true){
            estatus = "Activo";
        }else{
            estatus = "Inactivo";
        }



        // Insert a new row into the table
        int row = tableWidget->rowCount();
        tableWidget->insertRow(row);

        // Fill the table with the data
        tableWidget->setItem(row, 0, new QTableWidgetItem(nombre));                      // Nombre
        tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(reservaID)));  // ReservaID
        tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(mesaID)));     // MesaID
        tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(cantidadPersonas))); // Cantidad de Personas
        tableWidget->setItem(row, 4, new QTableWidgetItem(fecha.toString("yyyy-MM-dd"))); // Fecha
        tableWidget->setItem(row, 5, new QTableWidgetItem(hora.toString("hh:mm")));      // Hora
        tableWidget->setItem(row, 6, new QTableWidgetItem(estatus));                     // Estatus
    }

    // Resize columns to fit content
    tableWidget->resizeColumnsToContents();
}

void MainWindow::llenarTablaDisponibilidad(QTableWidget *tableWidget, const QDate &fecha, int mesaID)
{
    //Chequea si la mesa esta activa
    QSqlQuery checkMesaQuery;
    checkMesaQuery.prepare("SELECT activa FROM Mesa WHERE mesaID = :mesaID");
    checkMesaQuery.bindValue(":mesaID", mesaID);

    if (!checkMesaQuery.exec() || !checkMesaQuery.next()) {
        QMessageBox::warning(nullptr, "Error", "Error al comprobar el estado de la mesa.");
        return;
    }

    bool mesaActiva = checkMesaQuery.value(0).toBool();
    if (!mesaActiva) {
        QMessageBox::warning(nullptr, "Mesa Inactiva", "La mesa seleccionada no está activa.");
            return;
    }

    tableWidget->setColumnCount(3);
    QStringList headers = {"Mesa", "Hora", "Reservada"};
    tableWidget->setHorizontalHeaderLabels(headers);

    tableWidget->setRowCount(0);

    QSqlQuery query;

    // Recorrer las horas del restaurante (1 PM to 9 PM)
    for (int hour = 13; hour <= 21; ++hour) {
        QTime hora(hour, 0);

        // Chequea si la reserva esta hecha en esa hora en esa fecha
        query.prepare(R"(
            SELECT COUNT(*) FROM Reservaciones
            WHERE mesaID = :mesaID AND fecha = :fecha AND hora = :hora AND activo = true
        )");
        query.bindValue(":mesaID", mesaID);
        query.bindValue(":fecha", fecha);
        query.bindValue(":hora", hora);

        QString reservada = "No";
        if (query.exec() && query.next()) {
            int count = query.value(0).toInt();
            if (count > 0) {
                reservada = "Si";
            }
        } else {
            qDebug() << "Error: " << query.lastError().text();
        }


        int row = tableWidget->rowCount();
        tableWidget->insertRow(row);

        tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(mesaID)));
        tableWidget->setItem(row, 1, new QTableWidgetItem(hora.toString("hh:mm")));
        tableWidget->setItem(row, 2, new QTableWidgetItem(reservada));
    }


    tableWidget->resizeColumnsToContents();
}

void MainWindow::llenarComboBoxMesas(QComboBox *comboBox)
{
    comboBox->clear();

    QSqlQuery query;
    query.prepare("SELECT mesaID FROM Mesa");

    if (query.exec()) {
        while (query.next()) {
            int mesaID = query.value(0).toInt();
            comboBox->addItem(QString::number(mesaID));
        }
        qDebug() << "ComboBox llenado";
    } else {
        qDebug() << "Error: " << query.lastError().text();
    }
}

void MainWindow::llenarTablaMesas(QTableWidget *tableWidget)
{
    tableWidget->clear();

    tableWidget->setColumnCount(3);
    QStringList headers;
    headers << "MesaID" << "Tamanio" << "Estatus";
    tableWidget->setHorizontalHeaderLabels(headers);

    QSqlQuery query;
    query.prepare("SELECT mesaID, tamanio, activa FROM Mesa");

    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return;
    }

    int row = 0;
    while (query.next()) {
        int mesaID = query.value(0).toInt();
        QString tamanio = query.value(1).toString();
        bool activa = query.value(2).toBool();

        tableWidget->insertRow(row);

        tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(mesaID)));
        tableWidget->setItem(row, 1, new QTableWidgetItem(tamanio));
        QString estatus = activa ? "Activa" : "Inactiva";
        tableWidget->setItem(row, 2, new QTableWidgetItem(estatus));


        row++;
    }

    tableWidget->resizeColumnsToContents();
}

void MainWindow::actualizarReservas()
{
    QSqlQuery query;
    QDate currentDate = QDate::currentDate();

   //Query para actualizar reservas
    query.prepare(R"(
        UPDATE Reservaciones
        SET activo = false
        WHERE fecha < :currentDate AND activo = true
    )");
    query.bindValue(":currentDate", currentDate);


    if (query.exec()) {
        qDebug() << "Reservaciones actualizadas correctamente. Reservas expiradas desactivadas.";
    } else {
        qDebug() << "Error al actualizar las reservas:" << query.lastError().text();
    }
}

void MainWindow::llenarTablaReservacionesPorCliente(int clienteID, QTableWidget *tableWidget)
{

    if(rol == 0){
    tableWidget->setColumnCount(7);
    QStringList headers = {"Nombre", "ReservaID", "Mesa", "Cantidad de Personas", "Fecha", "Hora", "Estatus"};
    tableWidget->setHorizontalHeaderLabels(headers);


    tableWidget->setRowCount(0);

    QSqlQuery query(DatabaseManager::instance().getDatabase());


    query.prepare(R"(
        SELECT Cliente.nombre, Reservaciones.reservaID, Reservaciones.mesaID, Reservaciones.cantidadPersonas, Reservaciones.fecha, Reservaciones.hora, Reservaciones.activo
        FROM Reservaciones
        INNER JOIN Cliente ON Reservaciones.clienteID = Cliente.clienteID
        WHERE Cliente.clienteID = :clienteID
    )");
    query.bindValue(":clienteID", clienteID);

    if (!query.exec()) {
        qDebug() << "Error :" << query.lastError().text();
        return;
    }


    while (query.next()) {
        QString nombre = query.value(0).toString();
        int reservaID = query.value(1).toInt();
        int mesaID = query.value(2).toInt();
        int cantidadPersonas = query.value(3).toInt();
        QDate fecha = query.value(4).toDate();
        QTime hora = query.value(5).toTime();
        bool activo = query.value(6).toBool();
        QString estatus = activo ? "Activo" : "Inactivo";


        int row = tableWidget->rowCount();
        tableWidget->insertRow(row);


        tableWidget->setItem(row, 0, new QTableWidgetItem(nombre));                      // Nombre
        tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(reservaID)));  // ReservaID
        tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(mesaID)));     // Mesa
        tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(cantidadPersonas))); // Cantidad de Personas
        tableWidget->setItem(row, 4, new QTableWidgetItem(fecha.toString("yyyy-MM-dd"))); // Fecha
        tableWidget->setItem(row, 5, new QTableWidgetItem(hora.toString("hh:mm")));      // Hora
        tableWidget->setItem(row, 6, new QTableWidgetItem(estatus));                     //Activo
    }


    tableWidget->resizeColumnsToContents();
    }
    return;
}

void MainWindow::on_actionSalir_2_triggered()
{
    this->setVisible(false);

    //elLogin.setVisible(true);
}


void MainWindow::on_actionNueva_Reserva_2_triggered()
{
    if(rol ==1){
    formito.setVisible(true);
    }else{
        reservaCliente.clienteID = clienteID;
        reservaCliente.telefono = telefono;
        reservaCliente.setVisible(true);
    }
}


void MainWindow::on_actionModificar_Reserva_triggered()
{
    buscarReservacion.rol = rol;
    buscarReservacion.clienteID = clienteID;
    buscarReservacion.setVisible(true);
}


void MainWindow::on_actionCrear_Mesa_triggered()
{
    if(rol ==1){
    //crearMesa.setVisible(true);
    manejoMesas.llenarComboBoxMesas(manejoMesas.ui->comboBox);
    creacionMesa.setVisible(true);
    llenarComboBoxMesas(ui->comboBox);
    }else{
        QMessageBox::critical(this, "CHIVA!", "No tienes permiso para usar esta funcion.");
    }

}


void MainWindow::on_actionModificar_Mesa_triggered()
{
    if(rol ==1){
    //manejoMesas.llenarComboBoxMesas(manejoMesas.ui->comboBox);
    manejoMesas.setVisible(true);
    }else{
         QMessageBox::critical(this, "CHIVA!", "No tienes permiso para usar esta funcion.");
    }
}



void MainWindow::on_pushButton_clicked()
{
    llenarTablaDisponibilidad(ui->tableWidget_2, ui->calendarWidget->selectedDate(), ui->comboBox->currentText().toInt());
}


void MainWindow::on_pushButton_2_clicked()
{
    actualizarReservas();
    llenarTablaMesas(ui->tableWidget_3);
    llenarComboBoxMesas(ui->comboBox);
    if(rol ==1){


        llenarTablaReservaciones(ui->tableWidget);


    }else{
        llenarTablaReservacionesPorCliente(clienteID, ui->tableWidget);
    }

}

