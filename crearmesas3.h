#ifndef CREARMESAS3_H
#define CREARMESAS3_H

#include <QWidget>
#include <QComboBox>
#include <databasemanager.h>
#include <QMessageBox>

namespace Ui {
class crearmesas3;
}

class crearmesas3 : public QWidget
{
    Q_OBJECT

public:
    explicit crearmesas3(QWidget *parent = nullptr);
    ~crearmesas3();
    bool crearMesa(int mesaID, int tamanio);
    bool activarMesa(int mesaID);
    bool desactivarMesa(int mesaID);
    void llenarComboBoxMesas(QComboBox *comboBox);
    QSqlDatabase& db;

private slots:
    void on_crearMesita_clicked();

    void on_activarMesa_clicked();

    void on_desactivarMesa_clicked();

private:
    Ui::crearmesas3 *ui;
};

#endif // CREARMESAS3_H
