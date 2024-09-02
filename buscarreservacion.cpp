#include "buscarreservacion.h"
#include "ui_buscarreservacion.h"

#include "QMessageBox"

BuscarReservacion::BuscarReservacion(QWidget *parent)
    : QDialog(parent),
    db(DatabaseManager::instance().getDatabase()),
    ui(new Ui::buscarReservacion)
{
    ui->setupUi(this);
}

BuscarReservacion::~BuscarReservacion()
{
    delete ui;
}

bool BuscarReservacion::reservaIDExiste(int reservaID)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE reservaID = :reservaID");
    query.bindValue(":reservaID", reservaID);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

void BuscarReservacion::on_buttonBox_accepted()
{

    if(reservaIDExiste(ui->numeroReserva->text().toInt())){
        modificarReserva.reservaId = ui->numeroReserva->text().toInt();
        ui->numeroReserva->clear();
        this->hide();

        modificarReserva.setVisible(true);
    }else{
        QMessageBox::critical(this, "ERROR", "No existe la reserva.");
    }

    /*
    if (ui->numeroReserva->text().isEmpty()){
        QMessageBox::information(this, "ERROR", "No se ha ingresado ningun numero!");
    }else{
        if(ui->numeroReserva->text().toInt()!=0){
            modificarReserva.setVisible(true);
        }else{
            QMessageBox::information(this, "ERROR!", "Porfavor ingrese un numero!");
        }
    }
    */

}

