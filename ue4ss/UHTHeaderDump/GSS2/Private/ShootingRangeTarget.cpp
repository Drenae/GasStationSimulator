#include "ShootingRangeTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AShootingRangeTarget::AShootingRangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->TargetTeam = ETargetTeam::Red;
    this->OwnerREF = NULL;
    this->CanBeShooted = true;
    this->BaseScore = 0.00f;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MainTargetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainTargetMesh"));
    this->TargetType = EShootingRangeDifficulty::StandUp;
    this->MainTargetMesh->SetupAttachment(RootComponent);
}




