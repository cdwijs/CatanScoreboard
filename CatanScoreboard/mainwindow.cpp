#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myNumPlayers =3;
    myNumRank =0; //0=winner, add enum
    myPoints=0;
    myStreets=0;
    myKnights=0;
    ui->lcdNumPlayers->display(myNumPlayers); //should come from settings
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->textBrowser->append("on_tabWidget_currentChanged");
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
    if (myNumPlayers > 3)
    {
        myNumPlayers--;
        ui->lcdNumPlayers->display(myNumPlayers);
        ui->textBrowser->append("on_btnPlayersMin_pressed");
    }
}

void MainWindow::on_btnPlayersPlus_pressed()
{
    if (myNumPlayers < 6)
    {
        myNumPlayers++;
        ui->lcdNumPlayers->display(myNumPlayers);
        ui->textBrowser->append("on_btnPlayersPlus_pressed");
    }
}

void MainWindow::on_btnRankMin_pressed()
{
    if (myNumRank < (myNumPlayers-1))
    {
        myNumRank++;
    }
    switch (myNumRank)
    {
        case 0: //winner
        {
            ui->labelRank->setText("Winner");
            break;
        }
        case 1:
        {
            ui->labelRank->setText("Second");
            break;
        }
        case 2:
        {
            ui->labelRank->setText("Third");
            break;
        }
        case 3:
        {
            ui->labelRank->setText("Fourth");
            break;
        }
        case 4:
        {
            ui->labelRank->setText("Fifth");
            break;
        }
        case 5:
        {
            ui->labelRank->setText("Sixth");
            break;
        }
    }
}

void MainWindow::on_btnRankPlus_pressed()
{
    if (myNumRank > 0)
    {
        myNumRank--;
    }
    switch (myNumRank)
    {
        case 0: //winner
        {
            ui->labelRank->setText("Winner");
            break;
        }
        case 1:
        {
            ui->labelRank->setText("Second");
            break;
        }
        case 2:
        {
            ui->labelRank->setText("Third");
            break;
        }
        case 3:
        {
            ui->labelRank->setText("Fourth");
            break;
        }
        case 4:
        {
            ui->labelRank->setText("Fifth");
            break;
        }
        case 5:
        {
            ui->labelRank->setText("Sixth");
            break;
        }
    }
}

void MainWindow::on_btnPointsMin_pressed()
{
    if (myPoints>0)
    {
        myPoints--;
        ui->lcdPoints->display(myPoints);
    }
}

void MainWindow::on_btnPointsPlus_pressed()
{
    myPoints++;
    ui->lcdPoints->display(myPoints);
}

void MainWindow::on_btnStreetsMin_pressed()
{
    if (myStreets>0)
    {
        myStreets--;
        ui->lcdStreets->display(myStreets);
    }
}

void MainWindow::on_btnStreetsPlus_pressed()
{
    if (myStreets < 15)
    {
        myStreets++;
        ui->lcdStreets->display(myStreets);
    }
}

void MainWindow::on_btnKnightMin_pressed()
{
    if (myKnights>0)
    {
        myKnights--;
        ui->lcdKnight->display(myKnights);
    }
}

void MainWindow::on_btnKnightPlus_pressed()
{
    myKnights++;
    ui->lcdKnight->display(myKnights);
}
