#include "score.h"

#include <QSettings>
score::score(void)
{
    unsigned int i;
    for(i=0;i<15;i++)
    {
        myTotalScores.player[i]=i;
    }

}

/*recordTotalScores score::GetScores()
{
    //get from settings file
    return myTotalScores;
}*/

void score::AddScore(scoreRecord scorerecord)
{ //add score to QSettings object here
    double result=0;
    //msgSettings settings = mySettings.getSettings(); //unitialized
    msgSettings mySettings;
    QSettings settings;

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
    myTotalScores.numGamesPlayed[0]=settings.value("TotalScores/numGamesPlayed/0").toInt();
    myTotalScores.numGamesPlayed[1]=settings.value("TotalScores/numGamesPlayed/1").toInt();
    myTotalScores.numGamesPlayed[2]=settings.value("TotalScores/numGamesPlayed/2").toInt();
    myTotalScores.numGamesPlayed[3]=settings.value("TotalScores/numGamesPlayed/3").toInt();
    myTotalScores.numGamesPlayed[4]=settings.value("TotalScores/numGamesPlayed/4").toInt();
    myTotalScores.numGamesPlayed[5]=settings.value("TotalScores/numGamesPlayed/5").toInt();
    myTotalScores.numGamesPlayed[6]=settings.value("TotalScores/numGamesPlayed/6").toInt();
    myTotalScores.numGamesPlayed[7]=settings.value("TotalScores/numGamesPlayed/7").toInt();
    myTotalScores.numGamesPlayed[8]=settings.value("TotalScores/numGamesPlayed/8").toInt();
    myTotalScores.numGamesPlayed[9]=settings.value("TotalScores/numGamesPlayed/9").toInt();
    myTotalScores.numGamesPlayed[10]=settings.value("TotalScores/numGamesPlayed/10").toInt();
    myTotalScores.numGamesPlayed[11]=settings.value("TotalScores/numGamesPlayed/11").toInt();
    myTotalScores.numGamesPlayed[12]=settings.value("TotalScores/numGamesPlayed/12").toInt();
    myTotalScores.numGamesPlayed[13]=settings.value("TotalScores/numGamesPlayed/13").toInt();
    myTotalScores.numGamesPlayed[14]=settings.value("TotalScores/numGamesPlayed/14").toInt();
    myTotalScores.totalScore[0]=settings.value("TotalScores/totalScore/0").toDouble();
    myTotalScores.totalScore[1]=settings.value("TotalScores/totalScore/1").toDouble();
    myTotalScores.totalScore[2]=settings.value("TotalScores/totalScore/2").toDouble();
    myTotalScores.totalScore[3]=settings.value("TotalScores/totalScore/3").toDouble();
    myTotalScores.totalScore[4]=settings.value("TotalScores/totalScore/4").toDouble();
    myTotalScores.totalScore[5]=settings.value("TotalScores/totalScore/5").toDouble();
    myTotalScores.totalScore[6]=settings.value("TotalScores/totalScore/6").toDouble();
    myTotalScores.totalScore[7]=settings.value("TotalScores/totalScore/7").toDouble();
    myTotalScores.totalScore[8]=settings.value("TotalScores/totalScore/8").toDouble();
    myTotalScores.totalScore[9]=settings.value("TotalScores/totalScore/9").toDouble();
    myTotalScores.totalScore[10]=settings.value("TotalScores/totalScore/10").toDouble();
    myTotalScores.totalScore[11]=settings.value("TotalScores/totalScore/11").toDouble();
    myTotalScores.totalScore[12]=settings.value("TotalScores/totalScore/12").toDouble();
    myTotalScores.totalScore[13]=settings.value("TotalScores/totalScore/13").toDouble();
    myTotalScores.totalScore[14]=settings.value("TotalScores/totalScore/14").toDouble();
    myTotalScores.numGamesPlayed[scorerecord.myCurrentPlayer] += 1;
    myTotalScores.totalScore[scorerecord.myCurrentPlayer] += result;
    settings.setValue("TotalScores/numGamesPlayed/0",myTotalScores.numGamesPlayed[0]);
    settings.setValue("TotalScores/numGamesPlayed/1",myTotalScores.numGamesPlayed[1]);
    settings.setValue("TotalScores/numGamesPlayed/2",myTotalScores.numGamesPlayed[2]);
    settings.setValue("TotalScores/numGamesPlayed/3",myTotalScores.numGamesPlayed[3]);
    settings.setValue("TotalScores/numGamesPlayed/4",myTotalScores.numGamesPlayed[4]);
    settings.setValue("TotalScores/numGamesPlayed/5",myTotalScores.numGamesPlayed[5]);
    settings.setValue("TotalScores/numGamesPlayed/6",myTotalScores.numGamesPlayed[6]);
    settings.setValue("TotalScores/numGamesPlayed/7",myTotalScores.numGamesPlayed[7]);
    settings.setValue("TotalScores/numGamesPlayed/8",myTotalScores.numGamesPlayed[8]);
    settings.setValue("TotalScores/numGamesPlayed/9",myTotalScores.numGamesPlayed[9]);
    settings.setValue("TotalScores/numGamesPlayed/10",myTotalScores.numGamesPlayed[10]);
    settings.setValue("TotalScores/numGamesPlayed/11",myTotalScores.numGamesPlayed[11]);
    settings.setValue("TotalScores/numGamesPlayed/12",myTotalScores.numGamesPlayed[12]);
    settings.setValue("TotalScores/numGamesPlayed/13",myTotalScores.numGamesPlayed[13]);
    settings.setValue("TotalScores/numGamesPlayed/14",myTotalScores.numGamesPlayed[14]);
    settings.setValue("TotalScores/totalScore/0",myTotalScores.totalScore[0]);
    settings.setValue("TotalScores/totalScore/1",myTotalScores.totalScore[1]);
    settings.setValue("TotalScores/totalScore/2",myTotalScores.totalScore[2]);
    settings.setValue("TotalScores/totalScore/3",myTotalScores.totalScore[3]);
    settings.setValue("TotalScores/totalScore/4",myTotalScores.totalScore[4]);
    settings.setValue("TotalScores/totalScore/5",myTotalScores.totalScore[5]);
    settings.setValue("TotalScores/totalScore/6",myTotalScores.totalScore[6]);
    settings.setValue("TotalScores/totalScore/7",myTotalScores.totalScore[7]);
    settings.setValue("TotalScores/totalScore/8",myTotalScores.totalScore[8]);
    settings.setValue("TotalScores/totalScore/9",myTotalScores.totalScore[9]);
    settings.setValue("TotalScores/totalScore/10",myTotalScores.totalScore[10]);
    settings.setValue("TotalScores/totalScore/11",myTotalScores.totalScore[11]);
    settings.setValue("TotalScores/totalScore/12",myTotalScores.totalScore[12]);
    settings.setValue("TotalScores/totalScore/13",myTotalScores.totalScore[13]);
    settings.setValue("TotalScores/totalScore/14",myTotalScores.totalScore[14]);
    //emit sigNewTotalScores(recordTotalScores myTotalScores);
}

void score::ClearScores(void)
{
    int i;
    QSettings settings;


    for(i=0;i<15;i++)
    {
        myTotalScores.numGamesPlayed[i]=0;
        myTotalScores.totalScore[i]=0;
    }
    settings.setValue("TotalScores/numGamesPlayed/0",myTotalScores.numGamesPlayed[0]);
    settings.setValue("TotalScores/numGamesPlayed/1",myTotalScores.numGamesPlayed[1]);
    settings.setValue("TotalScores/numGamesPlayed/2",myTotalScores.numGamesPlayed[2]);
    settings.setValue("TotalScores/numGamesPlayed/3",myTotalScores.numGamesPlayed[3]);
    settings.setValue("TotalScores/numGamesPlayed/4",myTotalScores.numGamesPlayed[4]);
    settings.setValue("TotalScores/numGamesPlayed/5",myTotalScores.numGamesPlayed[5]);
    settings.setValue("TotalScores/numGamesPlayed/6",myTotalScores.numGamesPlayed[6]);
    settings.setValue("TotalScores/numGamesPlayed/7",myTotalScores.numGamesPlayed[7]);
    settings.setValue("TotalScores/numGamesPlayed/8",myTotalScores.numGamesPlayed[8]);
    settings.setValue("TotalScores/numGamesPlayed/9",myTotalScores.numGamesPlayed[9]);
    settings.setValue("TotalScores/numGamesPlayed/10",myTotalScores.numGamesPlayed[10]);
    settings.setValue("TotalScores/numGamesPlayed/11",myTotalScores.numGamesPlayed[11]);
    settings.setValue("TotalScores/numGamesPlayed/12",myTotalScores.numGamesPlayed[12]);
    settings.setValue("TotalScores/numGamesPlayed/13",myTotalScores.numGamesPlayed[13]);
    settings.setValue("TotalScores/numGamesPlayed/14",myTotalScores.numGamesPlayed[14]);
    settings.setValue("TotalScores/totalScore/0",myTotalScores.totalScore[0]);
    settings.setValue("TotalScores/totalScore/1",myTotalScores.totalScore[1]);
    settings.setValue("TotalScores/totalScore/2",myTotalScores.totalScore[2]);
    settings.setValue("TotalScores/totalScore/3",myTotalScores.totalScore[3]);
    settings.setValue("TotalScores/totalScore/4",myTotalScores.totalScore[4]);
    settings.setValue("TotalScores/totalScore/5",myTotalScores.totalScore[5]);
    settings.setValue("TotalScores/totalScore/6",myTotalScores.totalScore[6]);
    settings.setValue("TotalScores/totalScore/7",myTotalScores.totalScore[7]);
    settings.setValue("TotalScores/totalScore/8",myTotalScores.totalScore[8]);
    settings.setValue("TotalScores/totalScore/9",myTotalScores.totalScore[9]);
    settings.setValue("TotalScores/totalScore/10",myTotalScores.totalScore[10]);
    settings.setValue("TotalScores/totalScore/11",myTotalScores.totalScore[11]);
    settings.setValue("TotalScores/totalScore/12",myTotalScores.totalScore[12]);
    settings.setValue("TotalScores/totalScore/13",myTotalScores.totalScore[13]);
    settings.setValue("TotalScores/totalScore/14",myTotalScores.totalScore[14]);
}
