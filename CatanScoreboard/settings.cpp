#include "settings.h"

settings::settings()
{

    mySettings.rewardVictoryPoints              =10;
    mySettings.rewardStreets                    =1;
    mySettings.rewardResourceCardsUnplayed      =1;
    mySettings.rewardDevelCardsPlayed           =0.5;
    mySettings.rewardDevelCardsUnplayed         =0.5;
    mySettings.rewardPlayer1st                 =50;
    mySettings.rewardPlayer2nd                 =40;
    mySettings.rewardPlayer3rd                 =30;
    mySettings.rewardPlayer4rd                 =20;
    mySettings.rewardPlayer5th                 =10;
    mySettings.rewardPlayer6th                 =10;
}

msgSettings settings::getSettings()
{
    return mySettings;
}
