#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myNumPlayers =3;
    ui->lcdNumPlayers->display(myNumPlayers); //should come from settings
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    qDebug("index: %d",index);
    switch (index)
    {
        case 0:
        {
            qDebug("update leaderboard");
            break;
        }
        case 1:
        {
            qDebug("get input");
            break;
        }

    }
}



void MainWindow::on_btnPlayersMin_pressed()
{
    myNumPlayers--;
    ui->lcdNumPlayers->display(myNumPlayers);
}

void MainWindow::on_btnPlayersPlus_pressed()
{
    myNumPlayers++;
    ui->lcdNumPlayers->display(myNumPlayers);
}
