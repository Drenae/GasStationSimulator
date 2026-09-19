#include "SavedSean.h"

FSavedSean::FSavedSean() {
    this->IsWorkingOnWreck = false;
    this->IsInsideCrane = false;
    this->WreckPickedUpWithCrane = false;
    this->WreckDroppedWithCrane = false;
    this->bSeanCarSaved = false;
    this->PlayerLeftJunkyard = false;
    this->CurrentMarking = ECarWreckMarking::NONE;
    this->TimeSinceLastBark = 0.00f;
    this->CurrentBarkInterval = 0.00f;
    this->WasLastBarkSystemTimeRecorded = false;
}

