#include "SavedActiveQuestLine.h"

FSavedActiveQuestLine::FSavedActiveQuestLine() {
    this->ActiveObjectiveClass = NULL;
    this->SavedObjectiveProgress = 0;
    this->SavedObjectiveMaxProgress = 0;
    this->IsCurrentQuestLine = false;
}

