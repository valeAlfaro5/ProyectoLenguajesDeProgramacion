#ifndef NUEVARESERVA_CLIENTE_H
#define NUEVARESERVA_CLIENTE_H

#include "ManejoRestaurante.h"
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class nuevareserva_cliente;
}

class nuevareserva_cliente : public QWidget
{
    Q_OBJECT

public:
    explicit nuevareserva_cliente(QWidget *parent = nullptr);
    ~nuevareserva_cliente();
    ManejoRestaurante hola;
    QString telefono;
    int clienteID;

private slots:
    void on_pushButton_clicked();

    void on_mesasDisponibles_activated(int index);

    void on_pushButton_2_clicked();

    void on_dateEdit_dateChanged(const QDate &date);

    void on_timeEdit_dateChanged(const QDate &date);

    void on_timeEdit_timeChanged(const QTime &time);

private:
    Ui::nuevareserva_cliente *ui;
};

#endif // NUEVARESERVA_CLIENTE_H
