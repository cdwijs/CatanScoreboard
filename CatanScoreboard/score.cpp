#include "score.h"

#include <QSettings>
score::score(void)
{ //load the scores from setings, and add them all to totals
    unsigned int i;
    for(i=0;i<15;i++)
    {
        myTotalScores.player[i]=i;
    }
    //load scores here, also keep a counter for arraysize
}

recordTotalScores score::GetScores()
{
    //get from settings file
    return myTotalScores;
}

void score::AddScore(scoreRecord scorerecord)
{ //add score to QSettings object here
    double result=0;
    //msgSettings settings = mySettings.getSettings(); //unitialized
    msgSettings mySettings;

    mySettings.rewardVictoryPoints              =10; //quick hack, should come from QSettings object
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


    result += scorerecord.numPlayedDevelopmentCards * mySettings.rewardDevelCardsPlayed;
    result += mySettings.rewardDevelCardsUnplayed * scorerecord.numUnplayedDevelopmentCards;
    result += mySettings.rewardResourceCardsUnplayed * scorerecord.numUnplayedResourceCards;
    result += mySettings.rewardStreets * scorerecord.numStreets;
    result += mySettings.rewardVictoryPoints * scorerecord.numVictoryPoints;
    switch (scorerecord.myNumRank) {
    case 0: // 0= winner?
    {
        result += mySettings.rewardPlayer1st; //check if correct
        break;
    }
    case 1:
    {
        result += mySettings.rewardPlayer2nd;
        break;
    }
    case 2:
    {
        result += mySettings.rewardPlayer3rd;
        break;
    }
    case 3:
    {
        result += mySettings.rewardPlayer4rd;
        break;
    }
    case 4:
    {
        result += mySettings.rewardPlayer5th;
        break;
    }
    case 5:
    {
        result += mySettings.rewardPlayer6th;
        break;
    }
    default:
        break;
    }
    myTotalScores.numGamesPlayed[scorerecord.myCurrentPlayer] += 1;
    myTotalScores.totalScore[scorerecord.myCurrentPlayer] += result;
    //store in settings file here
    //emit sigNewTotalScores(recordTotalScores myTotalScores);
}

void score::ClearScores(void)
{
    int i;
    for(i=0;i<15;i++)
    {
        myTotalScores.numGamesPlayed[i]=0;
        myTotalScores.totalScore[i]=0;
        //store in settings file here
    }
}
