#ifndef SCORE_H
#define SCORE_H

struct scorerecord
{
    unsigned int numVictoryPoints;
    unsigned int numStreets;
    unsigned int numKnightCardsPlayed;
    unsigned int numDevelopmentCardsOnHand;
    unsigned int numResourceCardsOnHand;
};


class score
{
public:
    score(scorerecord *scorerecord);
    unsigned int GetScore (void);
private:
    scorerecord myScore;
    unsigned int totalScore;
};

#endif // SCORE_H
