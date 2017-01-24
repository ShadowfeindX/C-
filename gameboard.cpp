#include <QMessageBox>
#include <QActionEvent>

#include "gameboard.hpp"
#include "ui_gameboard.h"

GameBoard::GameBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameBoard)
{
    ui->setupUi(this);
}

GameBoard::~GameBoard()
{
    delete ui;
}

QPalette p;

int player = 1;

void GameBoard::end()
{
    QString s = "Player 1 Wins!";
    if (player == 2) s = "Player 2 Wins!";
    QMessageBox::information(this,"Congrats!",s);
    close();
}

void GameBoard::change_player()
{
    switch (player) {
    case 1:
        player = 2;
        ui->label->setText("<html><head/><body><p align='center'><span style=' font-size:20pt; color:#ff0000;'>Player 2's Turn</span></p></body></html>");
        break;
    case 2:
        player = 1;
        ui->label->setText("<html><head/><body><p align='center'><span style=' font-size:20pt; color:#0000ff;'>Player 1's Turn</span></p></body></html>");
        break;
    default:
        break;
    }
}

bool GameBoard::select_field(QPushButton* button)
{
    bool valid = true;
    p.operator =(button->palette());
    switch (player) {
    case 1:
        if (button->text() == "")
        {
            button->setText("X");
            p.setColor(QPalette::ButtonText,QColor::fromRgb(0,0,255));
            button->setPalette(p);
        }   else valid = false;
        break;
    case 2:
        if (button->text() == "")
        {
            button->setText("O");
            p.setColor(QPalette::ButtonText,QColor::fromRgb(255,0,0));
            button->setPalette(p);
        }   else valid = false;
        break;
    default:
        button->setText(QString::number(player));
        break;
    }

    return valid;
}

void GameBoard::check_status(int x, int y, QString b)
{
    grid[x][y] = b;
    if ( grid[0][y] == b && grid[1][y] == b && grid[2][y] == b ) end(); //close();
    if ( grid[x][0] == b && grid[x][1] == b && grid[x][2] == b ) end(); //close();
    if ( grid[0][0] == b && grid[1][1] == b && grid[2][2] == b ) end(); //close();
    if ( grid[2][0] == b && grid[1][1] == b && grid[0][2] == b ) end(); //close();
}

void GameBoard::on_pushButton_1_clicked()
{
    if (select_field(ui->pushButton_1))
    {
        check_status(0,0,ui->pushButton_1->text());
        change_player();
    }
}

void GameBoard::on_pushButton_2_clicked()
{
    if (select_field(ui->pushButton_2))
    {
        check_status(0,1,ui->pushButton_2->text());
        change_player();
    }
}

void GameBoard::on_pushButton_3_clicked()
{
    if (select_field(ui->pushButton_3))
    {
        check_status(0,2,ui->pushButton_3->text());
        change_player();
    }
}

void GameBoard::on_pushButton_4_clicked()
{
    if (select_field(ui->pushButton_4))
    {
        check_status(1,0,ui->pushButton_4->text());
        change_player();
    }
}

void GameBoard::on_pushButton_5_clicked()
{
    if (select_field(ui->pushButton_5))
    {
        check_status(1,1,ui->pushButton_5->text());
        change_player();
    }
}

void GameBoard::on_pushButton_6_clicked()
{
    if (select_field(ui->pushButton_6))
    {
        check_status(1,2,ui->pushButton_6->text());
        change_player();
    }
}

void GameBoard::on_pushButton_7_clicked()
{
    if (select_field(ui->pushButton_7))
    {
        check_status(2,0,ui->pushButton_7->text());
        change_player();
    }
}

void GameBoard::on_pushButton_8_clicked()
{
    if (select_field(ui->pushButton_8))
    {
        check_status(2,1,ui->pushButton_8->text());
        change_player();
    }
}

void GameBoard::on_pushButton_9_clicked()
{
    if (select_field(ui->pushButton_9))
    {
        check_status(2,2,ui->pushButton_9->text());
        change_player();
    }
}

