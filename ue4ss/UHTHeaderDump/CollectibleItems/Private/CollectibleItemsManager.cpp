#include "CollectibleItemsManager.h"

UCollectibleItemsManager::UCollectibleItemsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UCollectibleItemsManager::SetRemovedCard(TArray<TSoftObjectPtr<ACollectibleCard>> NewArray) {
}

void UCollectibleItemsManager::SetCardAccessibility(TSoftClassPtr<ACollectibleCard> CollectibleCard, bool NewIsUnlocked) {
}

void UCollectibleItemsManager::RandomCards(int32 MinRandomAmount, int32 MaxRandomAmount, int32 ChanceToGet, UCollectiblesInventoryComponent* CollectiblesInventoryComponent, TArray<FCollectibleCardAccessibility>& DrawnCards, bool RandomOnlyUnlockedCards, const bool RandomOnlyNotOwnedCards) {
}

TArray<ACollectibleCard*> UCollectibleItemsManager::GetSpawnedCards() {
    return TArray<ACollectibleCard*>();
}

TArray<TSoftObjectPtr<ACollectibleCard>> UCollectibleItemsManager::GetRemovedCards() {
    return TArray<TSoftObjectPtr<ACollectibleCard>>();
}


