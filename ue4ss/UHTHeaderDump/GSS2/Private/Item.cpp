#include "Item.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AItem::AItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->bIsGhost = false;
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->bIsMeshLoading = false;
    this->IsPublic = true;
    this->CanBeEditable = false;
    this->bHoldToEdit = false;
    this->ButtonToPerformHoldingInteractions = EHoldButton::NONE;
    this->EditHoldTime = 0.50f;
    this->bHasPermanentOutline = false;
    this->OwnerCharacter = NULL;
    this->bIsLockedFromQuest = false;
}

bool AItem::UseItem_Implementation(APawn* Pawn, bool Throw, float AimingTime) {
    return false;
}

void AItem::SpawnEventFinished_Implementation(bool AsGhost) {
}

bool AItem::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void AItem::SetItemPhysic(const bool bIsSimulatedPhysic) {
}


void AItem::LockItemFromQuest(bool bLock) {
}

bool AItem::IsUnLocked(AInteractableActor* Instaginator) {
    return false;
}

APathPoint* AItem::GetPathPoint_Implementation(AGSSWheeledVehicle* GSSWheeledVehicle) {
    return NULL;
}

FTransform AItem::GetInteractiveTransform_Implementation(AActor* Actor, bool& RotateToTransform) {
    return FTransform{};
}

bool AItem::GetElectrocity_Implementation() {
    return false;
}

void AItem::EnableElectrocity_Implementation(const bool On) {
}

bool AItem::EditItemHandled_Implementation(UPrimitiveComponent* EditedComponent) {
    return false;
}

bool AItem::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void AItem::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

bool AItem::CanBeInteractable_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

bool AItem::AlternativeInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}


