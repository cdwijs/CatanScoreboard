#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QCoreApplication::setOrganizationName("MySoft");
    QCoreApplication::setOrganizationDomain("mysoft.com");
    QCoreApplication::setApplicationName("Star Runner");
    QSettings settings;
    ui->setupUi(this);

    ui->lineEdit_1->setText(settings.value("players/Player1").toString());
    ui->lineEdit_2->setText(settings.value("players/Player2").toString());
    ui->lineEdit_3->setText(settings.value("players/Player3").toString());
    ui->lineEdit_4->setText(settings.value("players/Player4").toString());
    ui->lineEdit_5->setText(settings.value("players/Player5").toString());
    ui->lineEdit_6->setText(settings.value("players/Player6").toString());
    ui->lineEdit_7->setText(settings.value("players/Player7").toString());
    ui->lineEdit_8->setText(settings.value("players/Player8").toString());
    ui->lineEdit_9->setText(settings.value("players/Player9").toString());
    ui->lineEdit_10->setText(settings.value("players/Player10").toString());
    ui->lineEdit_11->setText(settings.value("players/Player11").toString());
    ui->lineEdit_12->setText(settings.value("players/Player12").toString());
    ui->lineEdit_13->setText(settings.value("players/Player13").toString());
    ui->lineEdit_14->setText(settings.value("players/Player14").toString());
    ui->lineEdit_15->setText(settings.value("players/Player15").toString());



    //send signal to settings.cpp to load playernames and rewards
    myCurrentPlayer =0;
    ui->labelPlayer->setText(mySettings.getPlayerName(myCurrentPlayer));
    myNumRank =0; //0=winner, add enum
    myPoints=0;
    myStreets=0;
    myKnights=0;
    myUnplayedResourceCards=0;
    myUnplayedDevelCards=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    QString string;
    QString string2;
    double score;
    QSettings settings;
    ui->textBrowser->append("on_tabWidget_currentChanged");
    qDebug("index: %d",index);
    switch (index)
    {
        case 0:
        {
            qDebug("update leaderboard");
            //here's the visible magic :-)
            ui->textBrowserLeaderBoard->clear();

            string = mySettings.getPlayerName(0);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/0").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/0").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/0").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/0").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);

            string = mySettings.getPlayerName(1);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/1").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/1").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/1").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/1").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(2);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/2").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/2").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/2").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/2").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(3);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/3").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/3").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/3").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/3").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(4);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/4").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/4").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/4").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/4").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(5);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/5").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/5").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/5").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/5").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(6);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/6").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/6").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/6").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/6").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(7);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/7").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/7").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/7").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/7").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(8);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/8").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/8").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/8").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/8").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(9);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/9").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/9").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/9").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/9").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(10);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/10").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/10").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/10").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/10").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(11);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/11").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/11").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/11").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/11").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(12);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/12").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/12").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/12").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/12").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(13);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/13").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/13").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/13").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/13").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);


            string = mySettings.getPlayerName(14);
            string.append("\t");
            string.append(settings.value("TotalScores/numGamesPlayed/14").toString());
            string.append("\t");
            string.append(settings.value("TotalScores/totalScore/14").toString());
            string.append("\t");
            score = settings.value("TotalScores/totalScore/14").toDouble();
            score /= settings.value("TotalScores/numGamesPlayed/14").toInt();
            string2.sprintf("%.2f",score);
            string.append(string2);
            ui->textBrowserLeaderBoard->append(string);
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
    if (myCurrentPlayer > 0)
    {
        myCurrentPlayer--;
    }
    ui->labelPlayer->setText(mySettings.getPlayerName(myCurrentPlayer));
}

void MainWindow::on_btnPlayersPlus_pressed()
{
    if (myCurrentPlayer < 14)
    {
        myCurrentPlayer++;
        ui->labelPlayer->setText(mySettings.getPlayerName(myCurrentPlayer));
    }
}

void MainWindow::on_btnRankMin_pressed()
{
    if (myNumRank < 5)
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
    if (myPoints<15)
    {
        myPoints++;
        ui->lcdPoints->display(myPoints);
    }
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
        ui->lcdPlayedDevelCards->display(myKnights);
    }
}

void MainWindow::on_btnKnightPlus_pressed()
{
    if (myKnights < 15)
    {
        myKnights++;
        ui->lcdPlayedDevelCards->display(myKnights);
    }
}


void MainWindow::on_btnUnplayedResourcePlus_pressed()
{
    if (myUnplayedResourceCards < 15)
    {
        myUnplayedResourceCards++;
        ui->lcdUnplayedResourceCards->display(myUnplayedResourceCards);
    }
}

void MainWindow::on_btnUnplayedResourceMin_pressed()
{
    if (myUnplayedResourceCards > 0)
    {
        myUnplayedResourceCards--;
        ui->lcdUnplayedResourceCards->display(myUnplayedResourceCards);
    }
}

void MainWindow::on_btnUnplayedDevelPlus_pressed()
{
    if (myUnplayedDevelCards < 15)
    {
        myUnplayedDevelCards++;
        ui->lcdUnplayedDevelCards->display(myUnplayedDevelCards);
    }
}

void MainWindow::on_btnUnplayedDevelMin_pressed()
{
    if (myUnplayedDevelCards > 0)
    {
        myUnplayedDevelCards--;
        ui->lcdUnplayedDevelCards->display(myUnplayedDevelCards);
    }
}


void MainWindow::on_btnAddScore_pressed()
{
    //gather all the scorecomponents from ui controls
    myScoreRecord.myCurrentPlayer = myCurrentPlayer; //adjust button handlers to use myScoreRecord directly
    myScoreRecord.myNumRank = myNumRank;
    myScoreRecord.numPlayedDevelopmentCards = myKnights;
    myScoreRecord.numStreets = myStreets;
    myScoreRecord.numUnplayedDevelopmentCards = myUnplayedDevelCards;
    myScoreRecord.numUnplayedResourceCards = myUnplayedResourceCards;
    myScoreRecord.numVictoryPoints = myPoints;
    myScore.AddScore(myScoreRecord);
}

void MainWindow::on_lineEdit_1_textEdited(const QString &arg1)
{
    QSettings settings;
    //settings.setValue("players/Player1",ui->lineEdit_1->text());
    settings.setValue("players/Player1",arg1);
}

void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player2",arg1);
}

void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player3",arg1);
}

void MainWindow::on_lineEdit_4_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player4",arg1);
}

void MainWindow::on_lineEdit_5_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player5",arg1);
}

void MainWindow::on_lineEdit_6_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player6",arg1);
}

void MainWindow::on_lineEdit_7_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player7",arg1);
}

void MainWindow::on_lineEdit_8_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player8",arg1);
}

void MainWindow::on_lineEdit_9_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player9",arg1);
}

void MainWindow::on_lineEdit_10_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player10",arg1);
}

void MainWindow::on_lineEdit_11_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player11",arg1);
}

void MainWindow::on_lineEdit_12_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player12",arg1);
}

void MainWindow::on_lineEdit_13_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player13",arg1);
}

void MainWindow::on_lineEdit_14_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player14",arg1);
}

void MainWindow::on_lineEdit_15_textEdited(const QString &arg1)
{
    QSettings settings;
    settings.setValue("players/Player15",arg1);
}


void MainWindow::on_btnClearLeaderboard_pressed()
{
    myScore.ClearScores();
}
