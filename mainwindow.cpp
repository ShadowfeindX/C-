
#include <algorithm>
#include <QMessageBox>
#include <QActionEvent>
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

void MainWindow::end()
{
    QMessageBox::information(this,"Congrats!","You Did It!");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::check_match()
{
    int a,b;
    QIcon back(QPixmap(":/cards/b"));
    QPushButton* cards[] {
        ui->pushButton,
        ui->pushButton_1,
        ui->pushButton_2,
        ui->pushButton_3,
        ui->pushButton_4,
        ui->pushButton_5,
        ui->pushButton_6,
        ui->pushButton_7,
        ui->pushButton_8,
        ui->pushButton_9,
        ui->pushButton_10,
        ui->pushButton_11,
        ui->pushButton_12,
        ui->pushButton_13,
        ui->pushButton_14,
        ui->pushButton_15
    };
    a = ui->spinBox->value();
    b = ui->spinBox_2->value();
    if ( a>-1 && b>-1 ) {
        a = ui->spinBox_3->value();
        b = ui->spinBox_4->value();
        if (ui->spinBox->value()==ui->spinBox_2->value()) {
            cards[a]->setEnabled(false);
            cards[b]->setEnabled(false);
        } else {
            QMessageBox::information(this,"Nope","Those Cards Don't Match!");
            cards[a]->setIcon(back);
            cards[b]->setIcon(back);
        } a=0;b=0;
    } for(int i=0;i<16;i++) {
        if ( cards[i]->isEnabled() ) b++;
    } if ( b==0 ) end();
    ui->spinBox->setValue(-1);
    ui->spinBox_2->setValue(-1);
    ui->spinBox_3->setValue(-1);
    ui->spinBox_4->setValue(-1);
}

void MainWindow::shuffle_cards()
{
    QPushButton* cards[] {
        ui->pushButton,
        ui->pushButton_1,
        ui->pushButton_2,
        ui->pushButton_3,
        ui->pushButton_4,
        ui->pushButton_5,
        ui->pushButton_6,
        ui->pushButton_7,
        ui->pushButton_8,
        ui->pushButton_9,
        ui->pushButton_10,
        ui->pushButton_11,
        ui->pushButton_12,
        ui->pushButton_13,
        ui->pushButton_14,
        ui->pushButton_15
    };

    int a[16];
    //QString s = "";
    QVector<QPixmap*> pixmaps;

    for (int i=0;i<8;i++)
    {
        a[i] = i;
        pixmaps.push_back(new QPixmap(":/cards/"+QString::number(i)));
    }
    for (int i=8;i<16;i++) a[i] = i-8;
    std::random_shuffle(std::begin(a),std::end(a));
    for (int i=0;i<16;i++)
    {
        cards[i]->setEnabled(true);
        cards[i]->setIcon(*pixmaps[a[i]]);
        cards[i]->setAccessibleName(QString::number(a[i]));
    }

}

void MainWindow::hide_cards()
{
    QPushButton* cards[] {
        ui->pushButton,
        ui->pushButton_1,
        ui->pushButton_2,
        ui->pushButton_3,
        ui->pushButton_4,
        ui->pushButton_5,
        ui->pushButton_6,
        ui->pushButton_7,
        ui->pushButton_8,
        ui->pushButton_9,
        ui->pushButton_10,
        ui->pushButton_11,
        ui->pushButton_12,
        ui->pushButton_13,
        ui->pushButton_14,
        ui->pushButton_15
    };

    QIcon back(QPixmap(":/cards/b"));
    for (int i=0;i<16;i++) cards[i]->setIcon(back);

}

void MainWindow::on_actionNew_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionCheck_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    int i = ui->pushButton->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(0);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(0);
        check_match();
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    int i = ui->pushButton_1->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(1);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(1);
        check_match();
    }
    //shuffle_cards();
}

void MainWindow::on_pushButton_2_clicked()
{
    int i = ui->pushButton_2->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(2);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(2);
        check_match();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    int i = ui->pushButton_3->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(3);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(3);
        check_match();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    int i = ui->pushButton_4->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(4);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(4);
        check_match();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    int i = ui->pushButton_5->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(5);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(5);
        check_match();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    int i = ui->pushButton_6->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(6);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(6);
        check_match();
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    int i = ui->pushButton_7->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(7);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(7);
        check_match();
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    int i = ui->pushButton_8->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(8);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(8);
        check_match();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    int i = ui->pushButton_9->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(9);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(9);
        check_match();
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    int i = ui->pushButton_10->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(10);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(10);
        check_match();
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    int i = ui->pushButton_11->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(11);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(11);
        check_match();
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    int i = ui->pushButton_12->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(12);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(12);
        check_match();
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    int i = ui->pushButton_13->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(13);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(13);
        check_match();
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    int i = ui->pushButton_14->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(14);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(14);
        check_match();
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    int i = ui->pushButton_15->accessibleName().toInt();
    if (ui->spinBox->value()<0) {
        ui->spinBox->setValue(i);
        ui->spinBox_3->setValue(15);
    } else {
        ui->spinBox_2->setValue(i);
        ui->spinBox_4->setValue(15);
        check_match();
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->spinBox->setValue(-1);
    ui->spinBox_2->setValue(-1);
    ui->stackedWidget->setCurrentIndex(1);
    shuffle_cards();
    QMessageBox::information(this,"Start","Memorize!");
    hide(); show();
    hide_cards();
}



void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    QPushButton* cards[] {
        ui->pushButton,
        ui->pushButton_1,
        ui->pushButton_2,
        ui->pushButton_3,
        ui->pushButton_4,
        ui->pushButton_5,
        ui->pushButton_6,
        ui->pushButton_7,
        ui->pushButton_8,
        ui->pushButton_9,
        ui->pushButton_10,
        ui->pushButton_11,
        ui->pushButton_12,
        ui->pushButton_13,
        ui->pushButton_14,
        ui->pushButton_15
    };
    int i = ui->spinBox->value();
    if (arg1>-1) cards[arg1]->setIcon(QIcon(":/cards/"+QString::number(i)));
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    QPushButton* cards[] {
        ui->pushButton,
        ui->pushButton_1,
        ui->pushButton_2,
        ui->pushButton_3,
        ui->pushButton_4,
        ui->pushButton_5,
        ui->pushButton_6,
        ui->pushButton_7,
        ui->pushButton_8,
        ui->pushButton_9,
        ui->pushButton_10,
        ui->pushButton_11,
        ui->pushButton_12,
        ui->pushButton_13,
        ui->pushButton_14,
        ui->pushButton_15
    };

    int i = ui->spinBox_2->value();
    if (arg1>-1) cards[arg1]->setIcon(QIcon(":/cards/"+QString::number(i)));
}

void MainWindow::on_actionHelp_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
}
