#ifndef MODIFICAR_RESERVA_H
#define MODIFICAR_RESERVA_H

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

private slots:

    void on_salirButton_clicked();

private:
    Ui::modifcarReserva  *ui;
};

#endif // MODIFICAR_RESERVA_H
