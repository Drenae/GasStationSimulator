#include "QueuedMovieToplay.h"

FQueuedMovieToplay::FQueuedMovieToplay() {
    this->MovieIndex = 0;
    this->bLoop = false;
    this->bIsStarted = false;
    this->bTrendingBonus = false;
    this->bRushHourBonus = false;
}

