#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>
#include <QString>

struct msgSettings
{
    double rewardVictoryPoints;
    double rewardStreets;
    double rewardResourceCardsUnplayed;
    double rewardDevelCardsUnplayed;
    double rewardDevelCardsPlayed;
    double rewardPlayer1st;
    double rewardPlayer2nd;
    double rewardPlayer3rd;
    double rewardPlayer4rd;
    double rewardPlayer5th;
    double rewardPlayer6th;
};

struct msgPlayers
{
    QString player1;
    QString player2;
    QString player3;
    QString player4;
    QString player5;
    QString player6;
    QString player7;
    QString player8;
    QString player9;
    QString player10;
    QString player11;
    QString player12;
    QString player13;
    QString player14;
    QString player15;
};

class settings
{
public:
    settings();
    msgSettings getSettings (void);
    msgPlayers getPlayers (void);
    QString getPlayerName (int player);
private:
    msgSettings mySettings;
    msgPlayers myPlayers;
};

#endif // SETTINGS_H
