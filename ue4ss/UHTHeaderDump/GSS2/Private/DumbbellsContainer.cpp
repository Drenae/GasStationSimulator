#include "DumbbellsContainer.h"

ADumbbellsContainer::ADumbbellsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContainerType = EDumbbellContainerType::STAND;
    this->DumbbellsMinigame = NULL;
}

void ADumbbellsContainer::UpdateWeight(UDumbbellSlotComponent* ChangedSlot, ADumbbellItem* NewItem) {
}

bool ADumbbellsContainer::TryToPlaceDumbbell(ADumbbellItem* DumbbellItem) {
    return false;
}

void ADumbbellsContainer::OnMoveModeEnabled_Implementation(bool bEnabled, ADumbbellItem* Item) {
}

void ADumbbellsContainer::Init_Implementation(ARvMinigameInWorld_Dumbbells* minigame) {
}

float ADumbbellsContainer::GetWeight() const {
    return 0.0f;
}

TArray<UDumbbellSlotComponent*> ADumbbellsContainer::GetSlots() const {
    return TArray<UDumbbellSlotComponent*>();
}

EDumbbellContainerType ADumbbellsContainer::GetContainerType() {
    return EDumbbellContainerType::STAND;
}

bool ADumbbellsContainer::CanPlaceItemHere(ADumbbellItem* DumbbellItem, UDumbbellSlotComponent*& OutSlot) {
    return false;
}


