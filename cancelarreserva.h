#ifndef CANCELARRESERVA_H
#define CANCELARRESERVA_H

#include <QDialog>

namespace Ui {
class cancelarReserva;
}

class CancelarReserva : public QDialog
{
    Q_OBJECT

public:
    explicit CancelarReserva(QWidget *parent = nullptr);
    ~CancelarReserva();

private:
    Ui::cancelarReserva *ui;
};

#endif // CANCELARRESERVA_H
