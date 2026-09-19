#include "SupBox.h"

ASupBox::ASupBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBePickedUp = true;
}


void ASupBox::OnInventoryUpdated_CheatCheck(const UInventoryComponent* Inventory) {
}



