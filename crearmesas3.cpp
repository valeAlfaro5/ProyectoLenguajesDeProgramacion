#include "crearmesas3.h"
#include "ui_crearmesas3.h"

crearmesas3::crearmesas3(QWidget *parent)
    : QWidget(parent),
    db(DatabaseManager::instance().getDatabase()),
     ui(new Ui::crearmesas3)
{


    ui->setupUi(this);
    llenarComboBoxMesas(ui->comboBox);
}

crearmesas3::~crearmesas3()
{
    delete ui;
}

bool crearmesas3::crearMesa(int mesaID, int tamanio)
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

bool crearmesas3::activarMesa(int mesaID) {
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

bool crearmesas3::desactivarMesa(int mesaID) {
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
        qDebug() << "Mesa con ID " << mesaID << " desactivada.";
        return true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}

void crearmesas3::llenarComboBoxMesas(QComboBox *comboBox)
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
void crearmesas3::on_crearMesita_clicked()
{

    if(crearMesa(ui->numeroMesa->text().toInt(), ui->cantidad->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa creada exitosamente!");
        llenarComboBoxMesas(ui->comboBox);

    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo crear la mesa.!");
    }

}


void crearmesas3::on_activarMesa_clicked()
{

    if(activarMesa(ui->comboBox->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa activada!");
    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo activar la mesa.");
    }

}


void crearmesas3::on_desactivarMesa_clicked()
{

    if(desactivarMesa(ui->comboBox->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa desactivada!");
    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo desactivar la mesa.");
    }

}

