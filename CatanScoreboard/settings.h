#ifndef SETTINGS_H
#define SETTINGS_H

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

class settings
{
public:
    settings();
    msgSettings getSettings (void);
private:
    msgSettings mySettings;
};

#endif // SETTINGS_H
