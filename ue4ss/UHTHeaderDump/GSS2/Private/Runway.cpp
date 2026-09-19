#include "Runway.h"

ARunway::ARunway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RunwayType = ERunway::MAX;
    this->AirportLevelToUnlock = 0;
    this->CurrentAirplaneLanded = NULL;
    this->bExtraTimeUsed = false;
    this->ExtraTimeLeft = 0;
}

void ARunway::ShowCreatedEntryItems(int32 PlaneIndex) {
}

void ARunway::SetExtraTimeUsed(bool NewValue) {
}

void ARunway::SetExtraTimeLeft(int32 TimeToSet) {
}

void ARunway::SetCurrentAirplaneLanded(ATradingAirplane* AirplaneToSet) {
}

bool ARunway::GetExtraTimeUsed() {
    return false;
}

int32 ARunway::GetExtraTimeLeft() {
    return 0;
}

ATradingAirplane* ARunway::GetCurrentAirplaneLanded() {
    return NULL;
}

void ARunway::CheckIfAllItemsLoaded(TArray<FSoftObjectPath> ItemsToLoad, int32 NumberOfEntriesCreated) {
}

void ARunway::CargoItemsLoaded(FPlaneEntry PlaneEntry, int32 ItemIndex) {
}

void ARunway::AllItemsNeededLoaded(int32 NumberOfEntriesCreated) {
}


