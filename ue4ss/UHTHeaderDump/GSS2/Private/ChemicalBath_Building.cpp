#include "ChemicalBath_Building.h"

AChemicalBath_Building::AChemicalBath_Building(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAutomaticEnabled = false;
}

void AChemicalBath_Building::SwitchAutomaticChemical() {
}

void AChemicalBath_Building::SetAutomaticEnabled(bool inIsAutomaticEnbaled) {
}

bool AChemicalBath_Building::IsAutomaticUnlocked() {
    return false;
}

bool AChemicalBath_Building::GetIsAutomaticEnabled() {
    return false;
}

bool AChemicalBath_Building::CheckIsItemInChemicalBath(FStorageCarPart CarPartToCheck) {
    return false;
}


