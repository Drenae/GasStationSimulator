#include "PlaceableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

APlaceableActor::APlaceableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCompatibile = false;
    this->bConstructionMode = true;
    this->ConstructType = EConstructType::SnapToPoint;
    this->MinLevelHouseToUnblock = 1;
    this->PlaceableBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PlaceableBox"));
    this->PlacementCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PlacementCollisionBox"));
    this->bSnapToGrid = false;
    this->SnappedToActor = NULL;
    this->DecorationSnapType = ESnapType::Wall;
    this->MaxSnapDistance = 500.00f;
    this->CurrentSnapPoint = NULL;
    this->HittedHousePart = NULL;
    this->PlaceableBox->SetupAttachment(RootComponent);
    this->PlacementCollisionBox->SetupAttachment(RootComponent);
}

void APlaceableActor::ToggleSnappingToGrid() {
}

void APlaceableActor::StartMovingActor() {
}

void APlaceableActor::SearchClosestCompatibileSnapPoint(FVector StartLocation) {
}

void APlaceableActor::R_Action(bool bIsPressed) {
}

bool APlaceableActor::PlaceActor() {
    return false;
}

void APlaceableActor::OutLineOverlappingActors(TArray<AActor*> OverlappingActors, TArray<AActor*>& PreviouslyOverlappingActors) {
}

int32 APlaceableActor::GetCurrentGridRotationValue() const {
    return 0;
}

TArray<AActor*> APlaceableActor::GetAllCompatibileSpawnPoint() {
    return TArray<AActor*>();
}

void APlaceableActor::EnableGhostMode_Implementation() {
}

void APlaceableActor::ClearOutlinedActors(TArray<AActor*>& PreviouslyOverlappingActors) {
}

void APlaceableActor::ChangeSnapRotationValue(bool bIncrease) {
}

void APlaceableActor::ChangeSnapGridValue(bool bIncrease) {
}

void APlaceableActor::CanBeSpawned_Implementation(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason) {
}


