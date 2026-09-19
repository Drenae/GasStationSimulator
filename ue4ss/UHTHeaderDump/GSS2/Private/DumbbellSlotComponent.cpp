#include "DumbbellSlotComponent.h"

UDumbbellSlotComponent::UDumbbellSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningContainer = NULL;
}

ADumbbellItem* UDumbbellSlotComponent::GetItem() const {
    return NULL;
}


