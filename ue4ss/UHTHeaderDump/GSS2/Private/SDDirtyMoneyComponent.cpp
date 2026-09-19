#include "SDDirtyMoneyComponent.h"

USDDirtyMoneyComponent::USDDirtyMoneyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USDDirtyMoneyComponent::RegisterDirtyMoneyCache(ASDDirtyMoneyCache* InCache) {
}

void USDDirtyMoneyComponent::RegisterDirtyMoneyBag(ASDMoneyBag* InBag) {
}

void USDDirtyMoneyComponent::OnDirtyMoneyBagDestroyed(AActor* DestroyedActor) {
}

int32 USDDirtyMoneyComponent::GetNumOfFilledMoneyCaches(bool bCountInactive) const {
    return 0;
}

float USDDirtyMoneyComponent::GetDirtyMoneyEquivalent(bool bCountInactive) const {
    return 0.0f;
}

TArray<ASDDirtyMoneyCache*> USDDirtyMoneyComponent::GetDirtyMoneyCaches() const {
    return TArray<ASDDirtyMoneyCache*>();
}

TArray<ASDMoneyBag*> USDDirtyMoneyComponent::GetDirtyMoneyBags() const {
    return TArray<ASDMoneyBag*>();
}

TArray<ASDDirtyMoneyCache*> USDDirtyMoneyComponent::GetActiveMoneyCaches() const {
    return TArray<ASDDirtyMoneyCache*>();
}


