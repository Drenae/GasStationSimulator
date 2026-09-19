#include "SavedPartySpot.h"

FSavedPartySpot::FSavedPartySpot() {
    this->bIsEventActive = false;
    this->bIsTimeLeft = false;
    this->bIsDanceTime = false;
    this->bIsFirstTimeEntering = false;
    this->NumberOfDancingNPC = 0;
    this->NumberOfNotDancingNPC = 0;
    this->PartyNPCAmount = 0;
    this->MusicDuration = 0.00f;
    this->SavedCustomersNumberToSpawn = 0;
}

