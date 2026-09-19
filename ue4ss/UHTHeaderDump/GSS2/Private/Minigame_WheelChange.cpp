#include "Minigame_WheelChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"
#include "GarageStaticMeshComponent.h"

AMinigame_WheelChange::AMinigame_WheelChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_WHEEL;
    this->GarageMingameType = EGarageMinigame::WHEEL_REPLACE;
    this->WheelSide = EWheelSide_FourWheel::FRONT_LEFT;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->BrokenWheel = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("BrokenWheel"));
    this->GhostWheel = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("GhostWheel"));
    this->WorkingWheel = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("WorkingWheel"));
    this->Screw1 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw1"));
    this->Screw2 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw2"));
    this->Screw3 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw3"));
    this->Screw4 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw4"));
    this->Screw5 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw5"));
    this->Screw1Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw1Ghost"));
    this->Screw2Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw2Ghost"));
    this->Screw3Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw3Ghost"));
    this->Screw4Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw4Ghost"));
    this->Screw5Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Screw5Ghost"));
    this->TrashWheelClass = NULL;
    this->GamePadDirection = 0.00f;
    this->indexItem = 0;
    this->BrokenWheel->SetupAttachment(RootComponent);
    this->GhostWheel->SetupAttachment(RootComponent);
    this->Screw1->SetupAttachment(RootComponent);
    this->Screw1Ghost->SetupAttachment(RootComponent);
    this->Screw2->SetupAttachment(RootComponent);
    this->Screw2Ghost->SetupAttachment(RootComponent);
    this->Screw3->SetupAttachment(RootComponent);
    this->Screw3Ghost->SetupAttachment(RootComponent);
    this->Screw4->SetupAttachment(RootComponent);
    this->Screw4Ghost->SetupAttachment(RootComponent);
    this->Screw5->SetupAttachment(RootComponent);
    this->Screw5Ghost->SetupAttachment(RootComponent);
}

void AMinigame_WheelChange::SelectScrew(int32 StageIndex, int32 Selected) {
}

UAnimMontage* AMinigame_WheelChange::GetProperRepairAnimation() {
    return NULL;
}

int32 AMinigame_WheelChange::GetNum(int32 StageIndex) {
    return 0;
}

int32 AMinigame_WheelChange::GetNextIndex(int32 StageIndex, int32 Index, bool Next) {
    return 0;
}


