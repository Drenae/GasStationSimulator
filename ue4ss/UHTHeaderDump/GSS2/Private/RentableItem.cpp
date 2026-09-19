#include "RentableItem.h"

ARentableItem::ARentableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentDurability = 100.00f;
}

void ARentableItem::SetCurrentDurability(float NewCurrentDurability) {
}

float ARentableItem::GetCurrentDurability() {
    return 0.0f;
}


