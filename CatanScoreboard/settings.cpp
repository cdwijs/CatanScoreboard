#include "settings.h"

settings::settings()
{

    mySettings.rewardVictoryPoints          =30;
    mySettings.rewardStreets                =2;
    mySettings.rewardKnightCardsPlayed      =4;
    mySettings.rewardDevelopmentCardsOnHand =3;
    mySettings.rewardResourceCardsOnHand    =3;
    mySettings.reward4Player1st             =50;
    mySettings.reward4Player2nd             =30;
    mySettings.reward4Player3rd             =20;
    mySettings.reward4Player4rd             =10;
    mySettings.reward3Player1st             =50;
    mySettings.reward3Player2nd             =25;
    mySettings.reward3Player3rd             =10;
}

msgSettings settings::getSettings()
{
    return mySettings;
}
