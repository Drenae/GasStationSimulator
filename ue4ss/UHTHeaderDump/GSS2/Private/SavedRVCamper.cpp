#include "SavedRVCamper.h"

FSavedRVCamper::FSavedRVCamper() {
    this->CamperState = ERVCamperState::ARRIVING;
    this->ServiceStreakBonuses = 0;
    this->bIsConcertCompleted = false;
    this->bCanLeaveCampSpot = false;
}

