#include "NPSmartObjectComponent.h"

UNPSmartObjectComponent::UNPSmartObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AcceptableRadious = 50.00f;
    this->bRotateToActor = true;
    this->bReservePoint = true;
}

FSmartPoint UNPSmartObjectComponent::StopReserveActor(ANPAICharacterBase* AICharacterBase) {
    return FSmartPoint{};
}

FSmartPoint UNPSmartObjectComponent::StartReserveActor(ANPAICharacterBase* AICharacterBase) {
    return FSmartPoint{};
}

FSmartPoint UNPSmartObjectComponent::FindCharacter(ANPAICharacterBase* AICharacterBase) {
    return FSmartPoint{};
}

bool UNPSmartObjectComponent::CanReserve(ACharacter* User) {
    return false;
}


