#include "InteractableChalkboard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AInteractableChalkboard::AInteractableChalkboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
}

TSoftObjectPtr<AEquipmentRentalBuilding> AInteractableChalkboard::GetRentalBuilding() {
    return NULL;
}


