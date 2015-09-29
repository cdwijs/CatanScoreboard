#include "score.h"
#include <QSettings>
score::score(scorerecord *scorerecord)
{
    myScore = *scorerecord;
}

unsigned int score::GetScore()
{
    int result;
    result = 0;
    return result;
}


//catch the signal with new score, update the board, and save it
