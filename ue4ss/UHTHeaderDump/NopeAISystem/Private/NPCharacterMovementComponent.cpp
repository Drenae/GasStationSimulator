#include "NPCharacterMovementComponent.h"

UNPCharacterMovementComponent::UNPCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GetSpeedValue[0] = 100.00f;
    this->GetSpeedValue[1] = 100.00f;
    this->GetSpeedValue[2] = 100.00f;
    this->GetSpeedValue[3] = 100.00f;
    this->GetSpeedValue[4] = 100.00f;
    this->GetSpeedValue[5] = 100.00f;
    this->RotationSpeed = 20.00f;
    this->BackWalkReactDist = 800.00f;
    this->RotateToPointReactDist = 300.00f;
    this->ForwardDirectionWeight = 1.00f;
}

void UNPCharacterMovementComponent::SetTargetPoint(FTargetPointStruct InTargetPointStruct) {
}

void UNPCharacterMovementComponent::SetCharacterMovementSpeed(ENPAIMovementSpeed NewAIMovementSpeed) {
}

bool UNPCharacterMovementComponent::IsTargetPointReached() {
    return false;
}

FTargetPointStruct UNPCharacterMovementComponent::GetTargetPoint() {
    return FTargetPointStruct{};
}

ENPAIMovementSpeed UNPCharacterMovementComponent::GetCharacterMovementSpeed() {
    return ENPAIMovementSpeed::Walk;
}


