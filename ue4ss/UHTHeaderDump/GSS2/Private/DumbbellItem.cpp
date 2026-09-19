#include "DumbbellItem.h"

ADumbbellItem::ADumbbellItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Weight = 0.00f;
}

float ADumbbellItem::GetWeight() const {
    return 0.0f;
}

UDumbbellSlotComponent* ADumbbellItem::GetSlot() const {
    return NULL;
}

UDumbbellSlotComponent* ADumbbellItem::GetPreviousSlot() const {
    return NULL;
}

ADumbbellsContainer* ADumbbellItem::GetContainer() const {
    return NULL;
}

bool ADumbbellItem::CanMove() const {
    return false;
}


