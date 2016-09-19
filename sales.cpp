#include "sales.h"
#include "ui_sales.h"

Sales::Sales(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sales)
{
    ui->setupUi(this);
}

Sales::~Sales()
{
    delete ui;
}

void Sales::update_sales(int *a)
{
    int b[] {9,12,15};
    float c[] {1.75,1.90,2.00};

    for (int i = 0; i < 3; i++)
    {
        a[i] += ui->sales->item(i,0)->text().split(" ")[0].toInt();
        ui->sales->item(i,0)->setText(QString::number(a[i])+" cups");
        ui->sales->item(i,1)->setText(QString::number(a[i]*b[i])+" oz.");
        ui->sales->item(i,2)->setText("$ "+QString::number(c[i]*a[i],'f',2));
    }

    ui->sales->item(3,0)->setText(QString::number(a[0]+a[1]+a[2])+" cups");
    ui->sales->item(3,1)->setText(QString::number((a[0]*b[0])+
                                                  (a[1]*b[1])+
                                                  (a[2]*b[2]))+" oz.");

    ui->sales->item(3,2)->setText("$ "+QString::number(((c[0]*a[0])+
                                                       (c[1]*a[1])+
                                                       (c[2]*a[2])),'f',2));
    delete a;
}
