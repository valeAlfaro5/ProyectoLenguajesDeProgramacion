#include "manejarmesas2.h"
#include "ui_manejarmesas2.h"

manejarmesas2::manejarmesas2(QWidget *parent)
    : QWidget(parent),
    db(DatabaseManager::instance().getDatabase()),
    ui(new Ui::manejarmesas2)
{
    ui->setupUi(this);
    llenarComboBoxMesas(ui->comboBox);
}

manejarmesas2::~manejarmesas2()
{
    delete ui;
}

bool manejarmesas2::activarMesa(int mesaID) {
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

bool manejarmesas2::desactivarMesa(int mesaID) {
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

void manejarmesas2::llenarComboBoxMesas(QComboBox *comboBox)
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



void manejarmesas2::on_desactivarMesa_clicked()
{
    if(desactivarMesa(ui->comboBox->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa desactivada!");
        //this->setVisible(false);
        this->close();
    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo desactivar la mesa.");
    }
}


void manejarmesas2::on_activarMesa_clicked()
{
    if(activarMesa(ui->comboBox->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa activada!");
        //this->setVisible(false);
        this->close();
    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo activar la mesa.");
    }
}

