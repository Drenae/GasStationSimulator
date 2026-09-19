#include "SavedVIPData.h"

FSavedVIPData::FSavedVIPData() {
    this->CurrentVIPTime = 0.00f;
    this->CurrentDestination = EDLCName::NONE;
    this->CurrentState = EVIPState::RESTING;
}

