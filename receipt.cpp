#include "receipt.h"
#include "ui_receipt.h"

#include <QKeyEvent>

Receipt::Receipt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

Receipt::~Receipt()
{
    delete ui;
}

void Receipt::keyPressEvent(QKeyEvent *event)
{
    if ( event->key() == Qt::Key_X ) close();
}

void Receipt::show_receipt(int *a, float f)
{
    ui->label_1->setText(QString::number(a[0])+" x Small Coffee");
    ui->label_3->setText("$ "+QString::number((1.75*a[0]),'f',2));

    ui->label_4->setText(QString::number(a[1])+" x Medium Coffee");
    ui->label_6->setText("$ "+QString::number((1.90*a[1]),'f',2));

    ui->label_7->setText(QString::number(a[2])+" x Large Coffee");
    ui->label_9->setText("$ "+QString::number((2.00*a[2]),'f',2));

    ui->total->display(QString::number(f,'f',2));

    show();
}
