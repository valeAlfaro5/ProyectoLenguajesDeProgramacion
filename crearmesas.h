#ifndef CREARMESAS_H
#define CREARMESAS_H

#include <QDialog>

namespace Ui {
class crearMesas;
}

class CrearMesas : public QDialog
{
    Q_OBJECT

public:
    explicit CrearMesas(QWidget *parent = nullptr);
    ~CrearMesas();

private:
    Ui::crearMesas *ui;
};

#endif // CREARMESAS_H
