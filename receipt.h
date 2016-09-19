#ifndef RECEIPT_H
#define RECEIPT_H

#include <QWidget>

namespace Ui {
class Receipt;
}

class Receipt : public QWidget
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = 0);
    ~Receipt();

private slots:
    void keyPressEvent(QKeyEvent *event);

public slots:
    void show_receipt(int *a, float f);

private:
    Ui::Receipt *ui;
};

#endif // RECEIPT_H
