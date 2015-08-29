#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::on_pushButton_clicked()
{
    //add a tab on clicked
    //http://www.codeprogress.com/cpp/libraries/qt/qtQTabWidgetAddTab.php#.Vc11iPlESUk
    //ui->tabWidget->addTab("tab3");
    ui->tabWidget->addTab(new QWidget(),"NEW");
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
