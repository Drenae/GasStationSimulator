#include "SDPlacementBoxTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

USDPlacementBoxTrigger::USDPlacementBoxTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bEnabled = false;
    this->bAutoPlaceOverlappedProduct = true;
    this->bAllowProductDetach = false;
    this->bDestroyAttachedProduct = true;
    this->PlacedProduct = NULL;
}

void USDPlacementBoxTrigger::SetEnabled(bool bInEnabled) {
}

void USDPlacementBoxTrigger::SetAutoPlaceOverlappedProduct(bool bAutoPlace) {
}

void USDPlacementBoxTrigger::SetAllowDetach(bool bAllowDetach) {
}

void USDPlacementBoxTrigger::PlaceProduct(AProduct* InProduct, bool bForcePlace) {
}

void USDPlacementBoxTrigger::OnPlayerPickedUp(const AActor* Actor) {
}

void USDPlacementBoxTrigger::OnPlacementBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool USDPlacementBoxTrigger::IsEnabled() const {
    return false;
}

AProduct* USDPlacementBoxTrigger::GetPlacedProduct() const {
    return NULL;
}

AProduct* USDPlacementBoxTrigger::DetachProduct(bool bForceDetach) {
    return NULL;
}

bool USDPlacementBoxTrigger::CanAcceptProduct(AProduct* InProduct) const {
    return false;
}


