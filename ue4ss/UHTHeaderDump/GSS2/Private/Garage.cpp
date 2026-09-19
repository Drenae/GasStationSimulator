#include "Garage.h"

AGarage::AGarage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameWidgetREF = NULL;
    this->bFirstCustomerServed = false;
    this->IsHighlightingVehicleParts = false;
    this->bPlayerInGarage = false;
}

void AGarage::OnPlayerLeftGarage_Implementation() {
}

void AGarage::OnPlayerEnteredGarage_Implementation() {
}

void AGarage::OnGarageMinigameStart_Implementation(EGarageMinigame GarageMinigameType) {
}

void AGarage::OnGarageMinigameEnd_Implementation(EGarageMinigame GarageMinigameType, bool bSuccess) {
}

void AGarage::OnGarageGameStarted_Implementation(ACarLift* CarLiftRef, AGSSWheeledVehicle* CarRef) {
}

void AGarage::OnGarageGameFinished_Implementation(ACarLift* CarLiftRef, AGSSWheeledVehicle* CarRef) {
}

bool AGarage::GetIsPlayerInGarage() {
    return false;
}


