#include "crearmesas.h"
#include "ui_crearmesas.h"
#include <QMessageBox>

CrearMesas::CrearMesas(QWidget *parent)
    : QDialog(parent)
    , db(DatabaseManager::instance().getDatabase()),
    ui(new Ui::crearMesas)
{
    ui->setupUi(this);
}

CrearMesas::~CrearMesas()
{
    delete ui;
}

bool CrearMesas::crearMesa(int mesaID, int tamanio)
{
    // Chequear que sea valido
    if (tamanio != 2 && tamanio != 4 && tamanio != 6 && tamanio != 8) {
        qDebug() << "Error: Invalid table size.";
        return false;
    }

    //Esto es para el enum
    QString tamanioStr;
    switch (tamanio) {
    case 2:
        tamanioStr = "Dos";
        break;
    case 4:
        tamanioStr = "Cuatro";
        break;
    case 6:
        tamanioStr = "Seis";
        break;
    case 8:
        tamanioStr = "Ocho";
        break;
    }

    //QSqlQuery query(DatabaseManager::instance().getDatabase());
    QSqlQuery query;
    query.prepare("INSERT INTO Mesa (mesaID, tamanio, activa) VALUES (:mesaID, :tamanio, :activa)");
    query.bindValue(":mesaID", mesaID);
    query.bindValue(":tamanio", tamanioStr);
    query.bindValue(":activa", true);

    if (query.exec()) {
        qDebug() << "Mesa creada.";
        return true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

bool CrearMesas::activarMesa(int mesaID) {
    QSqlQuery query;
    query.prepare("UPDATE Mesa SET activa = true WHERE mesaID = :mesaID");
    query.bindValue(":mesaID", mesaID);

    if (query.exec()) {
        qDebug() << "Mesa con ID " << mesaID << " activada.";
        return true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

bool CrearMesas::desactivarMesa(int mesaID) {
    QSqlQuery query;

    //Verque no hayan reservaciones activas vinculadas a la mesa
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE mesaID = :mesaID AND activo = true");
    query.bindValue(":mesaID", mesaID);

    if (!query.exec() || !query.next()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }

    int activeReservationsCount = query.value(0).toInt();
    if (activeReservationsCount > 0) {
        qDebug() << "Error: No se puede porque tiene reservaciones activas.";
        return false;
    }

    //Desactivar
    query.prepare("UPDATE Mesa SET activa = false WHERE mesaID = :mesaID");
    query.bindValue(":mesaID", mesaID);

    if (query.exec()) {
        qDebug() << "Mesa with ID" << mesaID << "deactivated successfully.";
        return true;
    } else {
        qDebug() << "Error: Could not deactivate mesa -" << query.lastError().text();
        return false;
    }
}

void CrearMesas::on_buttonBox_accepted()
{
    if(crearMesa(ui->numeroMesa->text().toInt(), ui->cantidad->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa creada exitosamente!");

    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo crear la mesa.!");
    }

    //QMessageBox::information(this, "EXITO!", "Mesa creada exitosamente!");
}


void CrearMesas::on_buttonBox_rejected()
{
    QMessageBox::information(this, "ERROR!", "Ocurrio un error al crear esta mesa!");
}

