#include "purchase.h"
#include "ui_purchase.h"

Purchase::Purchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Purchase)
{
    ui->setupUi(this);
}

Purchase::~Purchase()
{
    delete ui;
}

void Purchase::on_spinBox_valueChanged()
{
    update_total();
}

void Purchase::on_spinBox_2_valueChanged()
{
    update_total();
}

void Purchase::on_spinBox_3_valueChanged()
{
    update_total();
}

void Purchase::update_total()
{
    double arg1 = ui->spinBox->value();
    double arg2 = ui->spinBox_2->value();
    double arg3 = ui->spinBox_3->value();
    arg1 *= 1.75; arg2 *= 1.90; arg3 *= 2.00;

    ui->total->display(QString::number((arg1+arg2+arg3),'f',2));
}

void Purchase::accept()
{
    int a[] = {ui->spinBox->value(),
             ui->spinBox_2->value(),
             ui->spinBox_3->value()};

    print_receipt(a,ui->total->value());
    send_data(a);

    ui->spinBox->setValue(0);
    ui->spinBox_2->setValue(0);
    ui->spinBox_3->setValue(0);

    close();
}
