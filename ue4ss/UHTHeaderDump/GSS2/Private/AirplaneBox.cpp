#include "AirplaneBox.h"

AAirplaneBox::AAirplaneBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Box = NULL;
    this->AirplaneInventory = NULL;
}

void AAirplaneBox::UpdateBox() {
}

void AAirplaneBox::RefreshInventory(UInventoryComponent* NewAirplaneInventory) {
}

void AAirplaneBox::OnAirplaneInventoryUpdated(const UInventoryComponent* Inventory) {
}

void AAirplaneBox::OnAirplaneBoxLoaded(FTransform Transform, TSoftObjectPtr<UStaticMesh> BoxMesh) {
}


