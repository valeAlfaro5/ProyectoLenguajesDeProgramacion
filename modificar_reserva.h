#ifndef MODIFICAR_RESERVA_H
#define MODIFICAR_RESERVA_H

#include "databasemanager.h"
#include <QDialog>

namespace Ui {
class modifcarReserva;
}

class ModificarReserva : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarReserva(QWidget *parent = nullptr);
    ~ModificarReserva();
    void llenarInformacion(int numeroReserva);
    bool reservaIDExiste(int reservaID);
    bool modificarReservacion(int reservaID, QDate cambioFecha, QTime cambioHora);
    QSqlDatabase& db;
    int reservaId;
    bool cancelarReservacion(int reservaID);



private slots:

    void on_salirButton_clicked();


    void on_modificarButton_clicked();

private:
    Ui::modifcarReserva  *ui;
};

#endif // MODIFICAR_RESERVA_H
