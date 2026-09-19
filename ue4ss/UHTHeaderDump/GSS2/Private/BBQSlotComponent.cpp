#include "BBQSlotComponent.h"

UBBQSlotComponent::UBBQSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetStage = EBBQStage::RAW;
}

void UBBQSlotComponent::OnSelected_Implementation() {
}

void UBBQSlotComponent::OnDeselected_Implementation() {
}

ABBQItem* UBBQSlotComponent::GetBBQItemInside() const {
    return NULL;
}


