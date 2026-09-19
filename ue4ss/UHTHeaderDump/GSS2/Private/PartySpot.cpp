#include "PartySpot.h"

APartySpot::APartySpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartySpotClock = NULL;
    this->DanceFloor = NULL;
    this->SpawnedPartyUfo = NULL;
    this->SpawnedPartyBus = NULL;
    this->AvailablePartyProductTypesIndexes.AddDefaulted(5);
    this->NumberOfDancingNPC = 0;
    this->NumberOfNotDancingNPC = 0;
    this->PartyNPCAmount = 0;
    this->MusicDuration = 0.00f;
    this->bIsEventActive = false;
    this->bIsDanceTime = false;
    this->bIsTimeLeft = true;
    this->bIsFirstTimeEntering = true;
    this->bisPartySpotOpen = true;
    this->MusicLoop = 1;
    this->CustomersNumberToSpawn = 0;
    this->SpawnedCustomersNumber = 0;
    this->PartySpotProducts = NULL;
}

void APartySpot::UpdateAvailablePartyProductType(int32 Index) {
}

void APartySpot::StartSpawningPartyNPC() {
}

void APartySpot::SpawnPartyNPC() {
}



void APartySpot::SetAllPartySpotTableUnlocked() {
}

void APartySpot::SetAllPartySpotTableBlocked() {
}

void APartySpot::ResetPartyProductAvailibity() {
}

void APartySpot::ResetNPCSpawningRelVars() {
}

void APartySpot::OnSpecialNPCSpawn(const AAICharacterBase* Customer, const EHumanType HumanType) {
}


float APartySpot::GetPartyPopularityAmount(int32& NumberOfFullBaskets) {
    return 0.0f;
}

int32 APartySpot::GetPartyNPCAmount() {
    return 0;
}

int32 APartySpot::GetNumberOfFullBaskets() {
    return 0;
}


void APartySpot::EmptyAllPartySpotTables() {
}


