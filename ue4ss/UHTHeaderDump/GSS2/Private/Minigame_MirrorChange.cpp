#include "Minigame_MirrorChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"
#include "GarageStaticMeshComponent.h"

AMinigame_MirrorChange::AMinigame_MirrorChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_MIRROR;
    this->GarageMingameType = EGarageMinigame::MIRROR;
    this->GamePadDirection = 0.00f;
    this->indexItem = 0;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MirrorBase = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorBase"));
    this->MirrorGhost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorGhost"));
    this->MirrorFixed = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorFixed"));
    this->MirrorPart_01 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorPart_01"));
    this->MirrorPart_02 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorPart_02"));
    this->MirrorPart_03 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorPart_03"));
    this->MirrorPart_04 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorPart_04"));
    this->MirrorPart_05 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("MirrorPart_05"));
    this->CarMirrorSide = EMirrorSide::LEFT;
    this->AmountOfMirrorPartsToBreak = -1;
    this->AmountOfMirrorPartsBroken = 0;
    this->MirrorBase->SetupAttachment(RootComponent);
    this->MirrorFixed->SetupAttachment(MirrorBase);
    this->MirrorGhost->SetupAttachment(MirrorBase);
    this->MirrorPart_01->SetupAttachment(MirrorBase);
    this->MirrorPart_02->SetupAttachment(MirrorBase);
    this->MirrorPart_03->SetupAttachment(MirrorBase);
    this->MirrorPart_04->SetupAttachment(MirrorBase);
    this->MirrorPart_05->SetupAttachment(MirrorBase);
}


