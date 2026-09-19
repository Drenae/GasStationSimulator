#include "SavedEqRentalBuilding.h"

FSavedEqRentalBuilding::FSavedEqRentalBuilding() {
    this->EqRentalBuildingLevel = 0;
    this->bIsOpened = false;
    this->SavedBuildingState = EBuildingPathStationState::OPEN;
    this->SavedDeathsNumber = 0;
    this->SavedReplacementTresholdValue = 0.00f;
}

