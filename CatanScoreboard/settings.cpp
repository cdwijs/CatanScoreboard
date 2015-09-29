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

void settings::loadPlayers()
{
    QSettings settings;
    myPlayers.player1 = "Player 1"; //first load defaults
    myPlayers.player2 = "Player 2"; //first load defaults
    myPlayers.player3 = "Player 3"; //first load defaults
    myPlayers.player4 = "Player 4"; //first load defaults
    myPlayers.player5 = "Player 5"; //first load defaults
    myPlayers.player6 = "Player 6"; //first load defaults
    myPlayers.player7 = "Player 7"; //first load defaults
    myPlayers.player8 = "Player 8"; //first load defaults
    myPlayers.player9 = "Player 9"; //first load defaults
    myPlayers.player10 = "Player 10"; //first load defaults
    myPlayers.player11 = "Player 11"; //first load defaults
    myPlayers.player12 = "Player 12"; //first load defaults
    myPlayers.player13 = "Player 13"; //first load defaults
    myPlayers.player14 = "Player 14"; //first load defaults
    myPlayers.player15 = "Player 15"; //first load defaults
    if (settings.contains("players/Player1"))
    {
        myPlayers.player1 = settings.value("players/Player1").toString();
    }
    if (settings.contains("players/Player2"))
    {
        myPlayers.player1 = settings.value("players/Player2").toString();
    }
    if (settings.contains("players/Player3"))
    {
        myPlayers.player1 = settings.value("players/Player3").toString();
    }
    if (settings.contains("players/Player4"))
    {
        myPlayers.player1 = settings.value("players/Player4").toString();
    }
    if (settings.contains("players/Player5"))
    {
        myPlayers.player1 = settings.value("players/Player5").toString();
    }
    if (settings.contains("players/Player6"))
    {
        myPlayers.player1 = settings.value("players/Player6").toString();
    }
    if (settings.contains("players/Player7"))
    {
        myPlayers.player1 = settings.value("players/Player7").toString();
    }
    if (settings.contains("players/Player8"))
    {
        myPlayers.player1 = settings.value("players/Player8").toString();
    }
    if (settings.contains("players/Player9"))
    {
        myPlayers.player1 = settings.value("players/Player9").toString();
    }
    if (settings.contains("players/Player10"))
    {
        myPlayers.player1 = settings.value("players/Player10").toString();
    }
    if (settings.contains("players/Player11"))
    {
        myPlayers.player1 = settings.value("players/Player11").toString();
    }
    if (settings.contains("players/Player12"))
    {
        myPlayers.player1 = settings.value("players/Player12").toString();
    }
    if (settings.contains("players/Player13"))
    {
        myPlayers.player1 = settings.value("players/Player13").toString();
    }
    if (settings.contains("players/Player14"))
    {
        myPlayers.player1 = settings.value("players/Player14").toString();
    }
    if (settings.contains("players/Player15"))
    {
        myPlayers.player1 = settings.value("players/Player15").toString();
    }
}
