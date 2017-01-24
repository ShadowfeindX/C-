#include "pool.hpp"
#include "ui_pool.h"

Pool::Pool(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pool)
{
    ui->setupUi(this);
    water = 0; volume = 0;
    drainR = 0; fillR = 0;
}

Pool::~Pool()
{
    delete ui;
}

void Pool::fill(float min)
{
    water = fillR * min;
    if (check()) volume += water;
    else volume = max;

    ui->volume->display(volume);
}
void Pool::drain(float min)
{
    water = drainR * min * -1;
    if (check()) volume += water;
    else volume = 0.0;

    ui->volume->display(volume);
}
bool Pool::check()
{
    if (water >= 0)
    {
        if (max >= (volume + water)) return true;
        return false;
    } else
    {
        if (0 > (volume + water)) return false;
        return true;
    }
}


void Pool::on_fill_clicked()
{
    fill((ui->seconds->value() / 60.0) + (ui->minutes->value()) + (ui->hours->value() * 60.0));
}

void Pool::on_drain_clicked()
{
    drain((ui->seconds->value() / 60.0) + (ui->minutes->value()) + (ui->hours->value() * 60.0));
}

void Pool::on_fillR_valueChanged(double arg1)
{
    fillR = arg1;
}

void Pool::on_drainR_valueChanged(double arg1)
{
    drainR = arg1;
}
