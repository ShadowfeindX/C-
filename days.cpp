#include "days.hpp"
#include "ui_days.h"

Days::Days(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Days)
{
    ui->setupUi(this);
    ui->go->setVisible(false);
    ui->day->setVisible(false);
}

Days::~Days()
{
    delete ui;
}

void Days::on_mode1_clicked()
{
    ui->next->setVisible(true);
    ui->previous->setVisible(true);
    ui->go->setVisible(false);
    ui->day->setVisible(false);
}

void Days::on_mode2_clicked()
{
    ui->next->setVisible(false);
    ui->previous->setVisible(false);
    ui->go->setVisible(true);
    ui->day->setVisible(true);
}

void Days::on_next_clicked()
{
    current = current++ == 6 ? 0 : current;
    ui->current->setText(days[current]);
}

void Days::on_previous_clicked()
{
    current = current-- == 0 ? 6 : current;
    ui->current->setText(days[current]);
}

void Days::on_go_clicked()
{
    int next = ui->day->value();
    while ((current+next) >= 7) next -= 7;
    current += next;
    ui->current->setText(days[current]);
}
