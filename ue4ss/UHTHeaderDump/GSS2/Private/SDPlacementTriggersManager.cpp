#include "SDPlacementTriggersManager.h"

USDPlacementTriggersManager::USDPlacementTriggersManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverlapAutoPlaceProduct = true;
    this->bEnableTriggersByDefault = false;
}

void USDPlacementTriggersManager::SetCanPickUpProducts(bool bCanPickUp) {
}

void USDPlacementTriggersManager::OnProductTaken(USDPlacementBoxTrigger* Trigger, AProduct* Product) {
}

void USDPlacementTriggersManager::OnProductPlaced(USDPlacementBoxTrigger* Trigger, AProduct* PlacedProduct) {
}

void USDPlacementTriggersManager::OnProductOverlapped(USDPlacementBoxTrigger* Trigger, AProduct* OverlappedProduct) {
}

bool USDPlacementTriggersManager::IsProductPlaced(const AProduct* InProduct, USDPlacementBoxTrigger*& FoundBoxTrigger) const {
    return false;
}

TArray<AProduct*> USDPlacementTriggersManager::GetProducts() const {
    return TArray<AProduct*>();
}

TArray<USDPlacementBoxTrigger*> USDPlacementTriggersManager::GetPlacementTriggers() const {
    return TArray<USDPlacementBoxTrigger*>();
}

USDPlacementBoxTrigger* USDPlacementTriggersManager::GetEmptyPlacementBox() const {
    return NULL;
}

bool USDPlacementTriggersManager::DoesContainProducts() const {
    return false;
}


