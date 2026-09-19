#include "ActiveQuestLine.h"

UActiveQuestLine::UActiveQuestLine() {
    this->ActiveQuestLineData = NULL;
    this->ActiveQuestData = NULL;
    this->ActiveObjective = NULL;
    this->bDoingOnlyRetroactiveQuests = false;
    this->bIsQuestLineFollowed = false;
    this->bShouldCallQuestLineStartedEvent = false;
    this->bShouldCallQuestStartedEvent = false;
}


