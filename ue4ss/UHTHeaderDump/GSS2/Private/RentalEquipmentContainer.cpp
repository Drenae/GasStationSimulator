#include "RentalEquipmentContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARentalEquipmentContainer::ARentalEquipmentContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->CurrentMaxCapacity = 0;
}

void ARentalEquipmentContainer::TryShowRentalTutorial() {
}

bool ARentalEquipmentContainer::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void ARentalEquipmentContainer::SetReplacementEqQueue(TArray<FRentableEquipmentSlot> NewQueue) {
}

void ARentalEquipmentContainer::SetCurrentMaxCapacity(int32 NewValue) {
}

bool ARentalEquipmentContainer::RemoveEqFromQueue() {
    return false;
}

TArray<FRentableEquipmentSlot> ARentalEquipmentContainer::GetReplacementEqQueue() {
    return TArray<FRentableEquipmentSlot>();
}

int32 ARentalEquipmentContainer::GetCurrentMaxCapacity() {
    return 0;
}

int32 ARentalEquipmentContainer::FillToMax(int32 NumInInventory) {
    return 0;
}

bool ARentalEquipmentContainer::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void ARentalEquipmentContainer::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

bool ARentalEquipmentContainer::AddEqToQueue(int32 ItemQuantity) {
    return false;
}


