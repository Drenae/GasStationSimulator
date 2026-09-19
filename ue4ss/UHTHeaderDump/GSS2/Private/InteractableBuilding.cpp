#include "InteractableBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AInteractableBuilding::AInteractableBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingState = EBuildingPathStationState::OPEN;
    this->bShowClosedStationMesh = true;
    this->bIsBuildingOpen = true;
    this->ClosedStationMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosedStationMesh"));
    this->ClosedStationMesh->SetupAttachment(RootComponent);
}


void AInteractableBuilding::OpenCloseBuilding(EBuildingPathStationState NewState, uint8 PathStationIndex) {
}

bool AInteractableBuilding::GetIsBuildingOpen() {
    return false;
}

void AInteractableBuilding::DestroyRuin(AActor* DestroyedActor) {
}

bool AInteractableBuilding::CanBeUnblocked() {
    return false;
}


