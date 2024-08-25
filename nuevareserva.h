#ifndef NUEVARESERVA_H
#define NUEVARESERVA_H

#include <QDialog>

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

private:
    Ui::NuevaReserva *ui;
};

#endif // NUEVARESERVA_H
