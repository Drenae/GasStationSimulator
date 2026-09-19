#include "SavedShark.h"

FSavedShark::FSavedShark() {
    this->IsSharkInPreparation = false;
    this->IsSharkActive = false;
    this->CurrentTargetPointIndex = 0;
    this->SavedUseTargetActor = false;
    this->SavedTurnRate = 0.00f;
    this->SavedMovementPlayRate = 0.00f;
    this->SavedHealth = 0.00f;
    this->SavedPreysNumberToEat = 0;
    this->SavedEatenCustomersNumber = 0;
    this->SavedCurrentSecondsToFindNextPrey = 0.00f;
}

