#include "SavedPartyTables.h"

FSavedPartyTables::FSavedPartyTables() {
    this->bIsFull = false;
    this->bIsBlocked = false;
    this->ProductReason = EProductReason::Full;
}

