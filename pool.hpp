#ifndef POOL_HPP
#define POOL_HPP

#include <QWidget>

namespace Ui {
class Pool;
}

class Pool : public QWidget
{
    Q_OBJECT

public:
    explicit Pool(QWidget *parent = 0);
    float fillR, drainR;
    float length, width, height;
    double max, volume, water;
    ~Pool();

private slots:
    void fill(float);
    void drain(float);
    bool check();
    void on_fill_clicked();
    void on_drain_clicked();
    void on_fillR_valueChanged(double arg1);
    void on_drainR_valueChanged(double arg1);

private:
    Ui::Pool *ui;
};

#endif // POOL_HPP
