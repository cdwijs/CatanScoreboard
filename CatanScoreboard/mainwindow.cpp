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
    myNumPlayers--;
    ui->lcdNumPlayers->display(myNumPlayers);
    ui->textBrowser->append("on_btnPlayersMin_pressed");
}

void MainWindow::on_btnPlayersPlus_pressed()
{
    myNumPlayers++;
    ui->lcdNumPlayers->display(myNumPlayers);
    ui->textBrowser->append("on_btnPlayersPlus_pressed");
}

void MainWindow::on_toolButton_clicked()
{
    ui->textBrowser->append("on_toolButton_clicked");
}

void MainWindow::on_toolButton_clicked(bool checked)
{
    ui->textBrowser->append("on_toolButton_clicked(bool checked)");
}

void MainWindow::on_toolButton_pressed()
{
     ui->textBrowser->append("on_toolButton_pressed()");
}

void MainWindow::on_toolButton_released()
{
    ui->textBrowser->append("on_toolButton_released()");
}

void MainWindow::on_toolButton_toggled(bool checked)
{
    ui->textBrowser->append("on_toolButton_toggled(bool checked)");
}

void MainWindow::on_toolButton_destroyed()
{
    ui->textBrowser->append("on_toolButton_destroyed()");
}

void MainWindow::on_toolButton_destroyed(QObject *arg1)
{
    ui->textBrowser->append("on_toolButton_destroyed(QObject *arg1)");
}

void MainWindow::on_toolButton_objectNameChanged(const QString &objectName)
{
    ui->textBrowser->append("on_toolButton_objectNameChanged(const QString &objectName)");
}

void MainWindow::on_toolButton_triggered(QAction *arg1)
{
    ui->textBrowser->append("on_toolButton_triggered(QAction *arg1)");
}

void MainWindow::on_toolButton_customContextMenuRequested(const QPoint &pos)
{
    ui->textBrowser->append("on_toolButton_customContextMenuRequested(const QPoint &pos)");
}

void MainWindow::on_toolButton_windowIconTextChanged(const QString &iconText)
{
    ui->textBrowser->append("on_toolButton_windowIconTextChanged(const QString &iconText)");
}

void MainWindow::on_toolButton_windowTitleChanged(const QString &title)
{
    ui->textBrowser->append("on_toolButton_windowTitleChanged(const QString &title)");
}
