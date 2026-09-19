#include "RailsForShootingRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARailsForShootingRange::ARailsForShootingRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->ShootingRangeREF = NULL;
    this->CurrentTargetRef = NULL;
    this->ShootingTargetClass = NULL;
    this->RedTeamMaterialSlot = NULL;
    this->BlueTeamMaterialSlot = NULL;
    this->NeutralUfoMesh = NULL;
    this->NeutralCoyotMesh = NULL;
    this->Speed = 0.00f;
    this->TargetRespawnRate = 0.00f;
    this->FoldRateMin = 0.00f;
    this->FoldRateMax = 0.00f;
    this->TimerToFold = 0.00f;
    this->RandomizeRailType = false;
    this->Direction = 0.00f;
    this->RandomDirection = 0;
    this->TargetStartingLocation = 0.00f;
    this->RailMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RailMesh"));
    this->MaterialSlot1 = NULL;
    this->MaterialSlot2 = NULL;
    this->MaterialSlot3 = NULL;
    this->RailMesh->SetupAttachment(RootComponent);
    this->SplineComp->SetupAttachment(RootComponent);
}

void ARailsForShootingRange::StartRespawn() {
}



void ARailsForShootingRange::SpawnShootingTarget() {
}


FTargetTypeScorePair ARailsForShootingRange::RollRailType() {
    return FTargetTypeScorePair{};
}

void ARailsForShootingRange::RespawnShootingTarget() {
}

void ARailsForShootingRange::RemoveTargetOnShooted(bool ShootedByOponent) {
}


void ARailsForShootingRange::CreateShootingTargetSetRef() {
}

void ARailsForShootingRange::ClearRailAtGameEnds() {
}

void ARailsForShootingRange::AtGameStarted() {
}


