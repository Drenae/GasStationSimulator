#include "CollectiblesInventoryComponent.h"

UCollectiblesInventoryComponent::UCollectiblesInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentCapacity = 0;
    this->MaxCapacity = 2000;
    this->CollectibleItemsManager = NULL;
}

void UCollectiblesInventoryComponent::SortCardsByStrength() {
}

void UCollectiblesInventoryComponent::SortCardsByLastAdded() {
}

int32 UCollectiblesInventoryComponent::RemoveCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount) {
    return 0;
}

bool UCollectiblesInventoryComponent::IsCardOwned(TSoftClassPtr<ACollectibleCard> CardToCheck) {
    return false;
}

void UCollectiblesInventoryComponent::GetAllCardStructs(TArray<FCollectibleCardStruct>& CardsClasses) {
}

void UCollectiblesInventoryComponent::AddFoundCards(TArray<FCollectibleCardStruct> FoundCards) {
}

int32 UCollectiblesInventoryComponent::AddCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount) {
    return 0;
}


