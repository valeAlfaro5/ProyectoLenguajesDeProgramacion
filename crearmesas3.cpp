#include "crearmesas3.h"
#include "ui_crearmesas3.h"

crearmesas3::crearmesas3(QWidget *parent)
    : QWidget(parent),
    db(DatabaseManager::instance().getDatabase()),
     ui(new Ui::crearmesas3)
{


    ui->setupUi(this);
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


void crearmesas3::on_crearMesita_clicked()
{

    if(crearMesa(ui->numeroMesa->text().toInt(), ui->cantidad->currentText().toInt())){
        QMessageBox::information(this, "EXITO!", "Mesa creada exitosamente!");
        // llenarComboBoxMesas(ui->cantidad);
        this->setVisible(false);

    }else{
        QMessageBox::critical(this, "CHIVA!", "No se pudo crear la mesa.!");
    }

}


