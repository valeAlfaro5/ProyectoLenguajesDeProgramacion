#include "buscarreservacion.h"
#include "ui_buscarreservacion.h"

#include "QMessageBox"

BuscarReservacion::BuscarReservacion(QWidget *parent)
    : QDialog(parent),
    db(DatabaseManager::instance().getDatabase()),
    ui(new Ui::buscarReservacion)
{
    ui->setupUi(this);
    rol = -1;
    clienteID = -1;
}

BuscarReservacion::~BuscarReservacion()
{
    delete ui;
}

bool BuscarReservacion::reservaIDExiste(int reservaID)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE reservaID = :reservaID AND activo = 1");
    query.bindValue(":reservaID", reservaID);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

bool BuscarReservacion::reservaExiste(int reservaID, int clienteID)
{
    QSqlQuery query;

    query.prepare("SELECT reservaID FROM Reservaciones WHERE reservaID = :reservaID AND clienteID = :clienteID AND activo = 1");
    query.bindValue(":reservaID", reservaID);
    query.bindValue(":clienteID", clienteID);

    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return true; //Reservacion existe
    } else {
        return false; //No existe
    }
}


void BuscarReservacion::on_buttonBox_accepted()
{
    if (ui->numeroReserva->text().isEmpty()){
        QMessageBox::critical(this, "ERROR", "No ha ingresado ningun numero.");
    }

    if(rol ==1){

        if(reservaIDExiste(ui->numeroReserva->text().toInt())){
            modificarReserva.reservaId = ui->numeroReserva->text().toInt();
            ui->numeroReserva->clear();
            this->hide();

            modificarReserva.setVisible(true);
    }else{
        QMessageBox::critical(this, "ERROR", "No existe la reserva o ha expirado.");
    }
    }else{

        if(reservaExiste(ui->numeroReserva->text().toInt(),clienteID)){
            modificarReserva.reservaId = ui->numeroReserva->text().toInt();
            ui->numeroReserva->clear();
            this->hide();

            modificarReserva.setVisible(true);
        }else{
            QMessageBox::critical(this, "ERROR", "No existe la reserva o ha expirado.");
        }

    }

}





