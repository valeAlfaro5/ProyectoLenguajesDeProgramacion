#ifndef MANEJARMESAS_H
#define MANEJARMESAS_H

#include <QDialog>
#include <QComboBox>
#include <databasemanager.h>

namespace Ui {
class ManejarMesas;  // Ensure this matches the class name in the generated UI header
}

class ManejarMesas : public QDialog
{
    Q_OBJECT

public:
    explicit ManejarMesas(QWidget *parent = nullptr);
    ~ManejarMesas();
    bool crearMesa(int mesaID, int tamanio);
    bool activarMesa(int mesaID);
    bool desactivarMesa(int mesaID);
    void llenarComboBoxMesas(QComboBox *comboBox);
    QSqlDatabase& db;

private slots:
    void on_desactivarMesa_clicked();
    void on_activarMesa_clicked();

private:
    Ui::ManejarMesas *ui;  // Ensure this matches the class name in the generated UI header
};

#endif // MANEJARMESAS_H

