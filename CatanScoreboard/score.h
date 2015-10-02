#ifndef SCORE_H
#define SCORE_H

#include "settings.h"

struct scoreRecord
{
    unsigned int myCurrentPlayer;
    unsigned int myNumRank;
    unsigned int numVictoryPoints;
    unsigned int numStreets;
    unsigned int numPlayedDevelopmentCards;
    unsigned int numUnplayedDevelopmentCards;
    unsigned int numUnplayedResourceCards;
};

struct recordTotalScores
{
    unsigned int numGamesPlayed[15];
    double totalScore[15];
    unsigned int player[15];
};

class score
{
public:
    score(void);
   // recordTotalScores GetScores (void);
    void AddScore (scoreRecord scorerecord);
    void ClearScores (void);
private:
    recordTotalScores myTotalScores;
};

#endif // SCORE_H
