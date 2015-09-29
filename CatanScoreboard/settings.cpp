#include "settings.h"

settings::settings()
{
    //get below settings from settings file
    //also get players name from settings file
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
    QSettings settings;
    if (settings.contains("reward/VictoryPoints"))
    {
        mySettings.rewardDevelCardsPlayed = settings.value("reward/VictoryPoints").toDouble();
    }
    return mySettings;
}

QString settings::getPlayerName(int player)
{
    QSettings settings;
    QString result;
    switch (player)
    {
        default:
        {
            result="Unknown";
            break;
        }
        case 0:
        {
            result = settings.value("players/Player1").toString();
            break;
        }
        case 1:
        {
            result = settings.value("players/Player2").toString();
            break;
        }
        case 2:
        {
            result = settings.value("players/Player3").toString();
            break;
        }
        case 3:
        {
            result = settings.value("players/Player4").toString();
            break;
        }
        case 4:
        {
            result = settings.value("players/Player5").toString();
            break;
        }
        case 5:
        {
            result = settings.value("players/Player6").toString();
            break;
        }
        case 6:
        {
            result = settings.value("players/Player7").toString();
            break;
        }
        case 7:
        {
            result = settings.value("players/Player8").toString();
            break;
        }
        case 8:
        {
            result = settings.value("players/Player9").toString();
            break;
        }
        case 9:
        {
            result = settings.value("players/Player10").toString();
            break;
        }
        case 10:
        {
            result = settings.value("players/Player11").toString();
            break;
        }
        case 11:
        {
            result = settings.value("players/Player12").toString();
            break;
        }
        case 12:
        {
            result = settings.value("players/Player13").toString();
            break;
        }
        case 13:
        {
            result = settings.value("players/Player14").toString();
            break;
        }
        case 14:
        {
            result = settings.value("players/Player15").toString();
            break;
        }
    }
    return result;
}

