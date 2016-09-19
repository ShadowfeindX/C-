#include "sales.h"
#include "receipt.h"
#include "purchase.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Purchase p;
    Receipt r;
    Sales s;
    w.show();
    QObject::connect(&w, SIGNAL(purchase()), &p, SLOT(show()));
    QObject::connect(&w, SIGNAL(check_sales()), &s, SLOT(show()));
    QObject::connect(&p, SIGNAL(print_receipt(int*,float)),
                     &r, SLOT(show_receipt(int*,float)));
    QObject::connect(&p, SIGNAL(send_data(int*)),
                     &s, SLOT(update_sales(int*)));
    return a.exec();
}
