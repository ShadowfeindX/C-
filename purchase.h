#ifndef PURCHASE_H
#define PURCHASE_H

#include <QDialog>

namespace Ui {
class Purchase;
}

class Purchase : public QDialog
{
    Q_OBJECT

public:
    explicit Purchase(QWidget *parent = 0);
    ~Purchase();

private slots:
    void accept();
    void update_total();
    void on_spinBox_valueChanged();
    void on_spinBox_2_valueChanged();
    void on_spinBox_3_valueChanged();

signals:
    void send_data(int *a);
    void print_receipt(int *a, float f);

private:
    Ui::Purchase *ui;
};

#endif // PURCHASE_H
