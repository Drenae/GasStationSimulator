#include "ChemicalBath.h"

AChemicalBath::AChemicalBath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Concetration = 100.00f;
    this->LevelConcentrationDecrease = 0.00f;
    this->LevelDirtDecrease = 1.00f;
    this->WidgetRef = NULL;
    this->ConcentrationData = NULL;
    this->StartSlotAmount = 6;
    this->ChemicalBathBuilding = NULL;
}

void AChemicalBath::SwitchAutomaticChemical() {
}

void AChemicalBath::SetConcentrationAmount(float InConcentrationAmount) {
}

void AChemicalBath::SetChemicalSlots(TArray<FChemicalSlot> InSlotsToSet) {
}

void AChemicalBath::ResetConcentration() {
}

void AChemicalBath::RemoveFromChemicalSlot(int32 InSlotIndex) {
}

void AChemicalBath::OnChemicalBuildingUp(int32 Level, AChemicalBath_Building* BuildingRef) {
}

void AChemicalBath::OnChemicalBuildingBeginPlay(AChemicalBath_Building* BathBuilding) {
}

bool AChemicalBath::GetIsSlotOccupied(int32 InIndex) {
    return false;
}

bool AChemicalBath::GetIsChemicalSlotsEmpty() {
    return false;
}

int32 AChemicalBath::GetFirstEmptySlotIndex() {
    return 0;
}

float AChemicalBath::GetDirtRemovalAmount() {
    return 0.0f;
}

float AChemicalBath::GetCurrentConcetration() {
    return 0.0f;
}

TArray<FChemicalSlot> AChemicalBath::GetChemicalSlots() {
    return TArray<FChemicalSlot>();
}

int32 AChemicalBath::GetAmountOfItemsInSlots() {
    return 0;
}

float AChemicalBath::CalculateMoneyRequiredToRestoreConcentration() {
    return 0.0f;
}

bool AChemicalBath::AddToFirstEmptySlot(FStorageCarPart Item) {
    return false;
}

void AChemicalBath::AddToChemicalSlot(int32 InSlotIndex, FStorageCarPart Item) {
}

void AChemicalBath::AddFirstDirtyCarPartToCleaning() {
}


