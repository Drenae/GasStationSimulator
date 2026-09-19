#include "ConveyorBeltComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

UConveyorBeltComponent::UConveyorBeltComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PushDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("PushDirection"));
    this->PushForceMax = 50.00f;
    this->PushForce = 50.00f;
}

void UConveyorBeltComponent::SetConveyorActivity(bool bNewActive) {
}

bool UConveyorBeltComponent::IsConveyorActive() {
    return false;
}

TArray<UConveyorBeltSpawnLocComp*> UConveyorBeltComponent::GetSpawnLocationsFromOwner() {
    return TArray<UConveyorBeltSpawnLocComp*>();
}


