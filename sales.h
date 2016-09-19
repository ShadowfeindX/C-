#ifndef SALES_H
#define SALES_H

#include <QWidget>

namespace Ui {
class Sales;
}

class Sales : public QWidget
{
    Q_OBJECT

public:
    explicit Sales(QWidget *parent = 0);
    ~Sales();

public slots:
    void update_sales(int *a);

private:
    Ui::Sales *ui;
};

#endif // SALES_H
