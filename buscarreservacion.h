#ifndef BUSCARRESERVACION_H
#define BUSCARRESERVACION_H

#include <QDialog>
#include "modificar_reserva.h"
#include "databasemanager.h"

namespace Ui {
class buscarReservacion;
}

class BuscarReservacion : public QDialog
{
    Q_OBJECT

public:
    explicit BuscarReservacion(QWidget *parent = nullptr);
    ~BuscarReservacion();
    ModificarReserva modificarReserva;
    QSqlDatabase& db;
    bool reservaIDExiste(int reservaID);
    bool reservaExiste(int reservaID, int clienteID);
    int rol;
    int clienteID;


private slots:
    void on_buttonBox_accepted();

private:
    Ui::buscarReservacion *ui;
};

#endif // BUSCARRESERVACION_H
