#include "WorkshopRoof.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AWorkshopRoof::AWorkshopRoof(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->OpenedMeshPositionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("OpenedMeshPositionArrow"));
    this->AssignedPlatformResolved = NULL;
    this->DistanceFromMagnetToOpen = 500.00f;
    this->OpeningSpeedCurve = NULL;
    this->bIsOpen = false;
    this->bIsMoving = false;
    this->bIsClosingOnExit = false;
    this->OpenPercentage = 0.00f;
    this->JunkyardManager = NULL;
    this->MainMesh->SetupAttachment(RootComponent);
    this->OpenedMeshPositionArrow->SetupAttachment(RootComponent);
}

void AWorkshopRoof::UpdateRoofPosition() {
}

void AWorkshopRoof::OpenRoof() {
}



void AWorkshopRoof::OnCraneExited(bool ExitedyPlayer) {
}

void AWorkshopRoof::OnCraneEntered(bool EnteredByPlayer) {
}

bool AWorkshopRoof::IsOpen() {
    return false;
}

void AWorkshopRoof::CloseRoof() {
}


