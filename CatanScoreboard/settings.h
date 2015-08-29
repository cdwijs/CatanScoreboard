#ifndef SETTINGS_H
#define SETTINGS_H

struct msgSettings
{
    int rewardVictoryPoints;
    int rewardStreets;
    int rewardKnightCardsPlayed;
    int rewardDevelopmentCardsOnHand;
    int rewardResourceCardsOnHand;
    int reward4Player1st;
    int reward4Player2nd;
    int reward4Player3rd;
    int reward4Player4rd;
    int reward3Player1st;
    int reward3Player2nd;
    int reward3Player3rd;
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
