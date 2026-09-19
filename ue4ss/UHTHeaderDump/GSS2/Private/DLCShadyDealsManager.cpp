#include "DLCShadyDealsManager.h"

UDLCShadyDealsManager::UDLCShadyDealsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SheriffBehaviourSettingsDataAsset = NULL;
    this->ShadynessManager = NULL;
    this->GameplayEvents = NULL;
}

void UDLCShadyDealsManager::UnlockAllProducts() {
}

void UDLCShadyDealsManager::SetProductLocked(TSoftClassPtr<AItem> InProduct, bool bLocked) {
}

bool UDLCShadyDealsManager::IsProductLocked(TSoftClassPtr<AItem> Product) const {
    return false;
}

USDSheriffBehaviorDataAsset* UDLCShadyDealsManager::GetSheriffBehaviourDataAsset() const {
    return NULL;
}

USDShadynessManager* UDLCShadyDealsManager::GetShadynessManager() const {
    return NULL;
}

TArray<TSoftClassPtr<AItem>> UDLCShadyDealsManager::GetLockedProducts() const {
    return TArray<TSoftClassPtr<AItem>>();
}

USDGameplayEvents* UDLCShadyDealsManager::GetGameplayEvents() const {
    return NULL;
}


