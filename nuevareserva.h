#ifndef NUEVARESERVA_H
#define NUEVARESERVA_H

#include <QDialog>
#include "ManejoRestaurante.h"

namespace Ui {
class NuevaReserva;
}

class NuevaReserva : public QDialog
{
    Q_OBJECT

public:
    explicit NuevaReserva(QWidget *parent = nullptr);
    ~NuevaReserva();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_mesasDisponibles_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::NuevaReserva *ui;
    ManejoRestaurante hola;

};

#endif // NUEVARESERVA_H
