#include "modificar_reserva.h"
#include "ManejoRestaurante.h"
#include "ui_modificar_reserva.h"
#include <QMessageBox>


ModificarReserva::ModificarReserva(QWidget *parent)
    : QDialog(parent),
     db(DatabaseManager::instance().getDatabase()),
     ui(new Ui::modifcarReserva)
{
    reservaId = -1;

    ui->setupUi(this);
}

ModificarReserva::~ModificarReserva()
{
    delete ui;
}

void ModificarReserva::llenarInformacion(int numeroReserva)
{
    if(numeroReserva!= 0 ){

    }else{
        QMessageBox::information(this, "ERROR!", "No existe una reserva con ese numero!");
    }
}



bool ModificarReserva::modificarReservacion(int reservaID, QDate cambioFecha, QTime cambioHora)
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDateTime newDateTime(cambioFecha, cambioHora);

    if (newDateTime <= currentDateTime) {
        qDebug() << "Error: No se puede cambiar a tiempo pasado.";
        return false;
    }

    if (cambioHora < QTime(13, 0) || cambioHora >= QTime(21, 0)) {
        qDebug() << "Error: Fuera de las horas del restaurante.";
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT mesaID FROM Reservaciones WHERE reservaID = :reservaID");
    query.bindValue(":reservaID", reservaID);

    if (!query.exec() || !query.next()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }

    int mesaID = query.value(0).toInt();
    query.prepare("SELECT COUNT(*) FROM Reservaciones WHERE mesaID = :mesaID AND fecha = :fecha AND hora = :hora AND reservaID != :reservaID");
    query.bindValue(":mesaID", mesaID);
    query.bindValue(":fecha", cambioFecha);
    query.bindValue(":hora", cambioHora);
    query.bindValue(":reservaID", reservaID);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        if (count > 0) {
            qDebug() << "Error: Ya existe una reserva en esa mesa el mismo dia y la misma hora";
            return false;
        }
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }

    query.prepare("UPDATE Reservaciones SET fecha = :fecha, hora = :hora WHERE reservaID = :reservaID");
    query.bindValue(":fecha", cambioFecha);
    query.bindValue(":hora", cambioHora);
    query.bindValue(":reservaID", reservaID);

    if (query.exec()) {
        qDebug() << "Reservacion actualizada.";
        return true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

bool ModificarReserva::cancelarReservacion(int reservaID)
{
    auto& reservaciones = DatabaseManager::instance().reservaciones;

    for (auto& reservacion : reservaciones) {
        if (reservacion.reservaID == reservaID) {
            reservacion.activo = false;
            qDebug() << "Reservation ID" << reservaID << "cancelled.";
            break;
        }
    }

    QSqlQuery query;
    query.prepare("UPDATE Reservaciones SET activo = false WHERE reservaID = :reservaID");
    query.bindValue(":reservaID", reservaID);
    query.exec();
}





void ModificarReserva::on_salirButton_clicked()
{

}


void ModificarReserva::on_modificarButton_clicked()
{
    if(modificarReservacion(reservaId, ui->dateEdit->date(), ui->timeEdit->time())){

        QMessageBox::information(this, "EXITO", "La reserva se ha modificado.");
        this->close();


    }else{
        QMessageBox::information(this, "ERROR", "No se pudo modificar.");
    }
}

