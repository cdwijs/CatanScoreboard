#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include "settings.h"
#include "score.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tabWidget_currentChanged(int index);
    void on_btnPlayersMin_pressed();
    void on_btnPlayersPlus_pressed();
    void on_btnRankMin_pressed();

    void on_btnRankPlus_pressed();

    void on_btnPointsMin_pressed();

    void on_btnPointsPlus_pressed();

    void on_btnStreetsMin_pressed();

    void on_btnStreetsPlus_pressed();

    void on_btnKnightMin_pressed();

    void on_btnKnightPlus_pressed();

    void on_btnAddScore_pressed();

    void on_lineEdit_1_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_lineEdit_4_textEdited(const QString &arg1);

    void on_lineEdit_5_textEdited(const QString &arg1);

    void on_lineEdit_6_textEdited(const QString &arg1);

    void on_lineEdit_7_textEdited(const QString &arg1);

    void on_lineEdit_8_textEdited(const QString &arg1);

    void on_lineEdit_9_textEdited(const QString &arg1);

    void on_lineEdit_10_textEdited(const QString &arg1);

    void on_lineEdit_11_textEdited(const QString &arg1);

    void on_lineEdit_12_textEdited(const QString &arg1);

    void on_lineEdit_13_textEdited(const QString &arg1);

    void on_lineEdit_14_textEdited(const QString &arg1);

    void on_lineEdit_15_textEdited(const QString &arg1);

    void on_btnUnplayedResourcePlus_pressed();

    void on_btnUnplayedResourceMin_pressed();

    void on_btnUnplayedDevelPlus_pressed();

    void on_btnUnplayedDevelMin_pressed();

    void on_btnClearLeaderboard_pressed();

private:

    Ui::MainWindow *ui;
    settings mySettings;
    //int myNumPlayers;
    int myCurrentPlayer; //move to struct in score.h
    int myNumRank;       //next send complete struct to score
    int myPoints;
    int myStreets;
    int myKnights;
    int myUnplayedResourceCards;
    int myUnplayedDevelCards;
    scoreRecord myScoreRecord;
    score myScore;
};

#endif // MAINWINDOW_H
