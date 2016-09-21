#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_taxes()
{
    double a,b;
    //double taxableIncome;
    switch(ui->maritalStatusComboBox->currentIndex())
    {
        case 1: case 3: case 4:
            b = ui->grossSalaryDoubleSpinBox->value() -
               (ui->grossSalaryDoubleSpinBox->value() *
               (ui->pensionDoubleSpinBox->value()/100.00)) -
                1500 - 4000;
            break;
        case 0: case 2:
            b = ui->grossSalaryDoubleSpinBox->value() -
               (ui->grossSalaryDoubleSpinBox->value() *
               (ui->pensionDoubleSpinBox->value()/100)) -
              ((ui->childrenSpinBox->value() + 2)*1500) - 7000;
            break;
        default:
            b = 0.00;
    } ui->incomeData->item(0)->setText("Taxable Income: $" +
                                       QString::number(b<0?0:b,'f',2));
    if (b <= 15000) {
        a = 0.0;
        b = b*.15;
    } else if (b <= 40000) {
        a = 2250;
        b = (b-15000)*.25;
    } else {
        a = 8460;
        b = (b-40000)*.35;
    }
    ui->incomeData->item(1)->setText("Base Tax: $" + QString::number(b<0?0:b,'f',2));
    ui->incomeData->item(2)->setText("Additional Tax: $" + QString::number(a<0?0:a,'f',2));
    ui->incomeData->item(3)->setText("Tax Amount Owed: $" + QString::number(a+b<0?0:a+b,'f',2));
}

void MainWindow::on_maritalStatusComboBox_currentIndexChanged()
{
    switch (ui->maritalStatusComboBox->currentIndex())
    {
        case 0:
            ui->grossSalaryLabel->setText("Combined Salary");
            ui->grossSalaryDoubleSpinBox->setToolTip(
                        "Combined income of your spouse and yourself.");
            ui->childrenSpinBox->setToolTip("Enter children under age 14.");
            ui->childrenSpinBox->setEnabled(true);
            break;
        case 2:
            ui->grossSalaryLabel->setText("Personal Salary");
            ui->grossSalaryDoubleSpinBox->setToolTip("Your personal income.");
            ui->childrenSpinBox->setToolTip("Enter children under age 14.");
            ui->childrenSpinBox->setEnabled(true);
            break;
        default:
        ui->grossSalaryLabel->setText("Personal Salary");
        ui->grossSalaryDoubleSpinBox->setToolTip("Your personal income.");
        ui->childrenSpinBox->setToolTip("");
        ui->childrenSpinBox->setEnabled(false);
    }

    update_taxes();
}

void MainWindow::on_childrenSpinBox_valueChanged()
{
    update_taxes();
}

void MainWindow::on_grossSalaryDoubleSpinBox_valueChanged()
{
    update_taxes();
}

void MainWindow::on_pensionDoubleSpinBox_valueChanged()
{
    update_taxes();
}
