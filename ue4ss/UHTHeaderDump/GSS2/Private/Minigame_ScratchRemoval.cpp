#include "Minigame_ScratchRemoval.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"

AMinigame_ScratchRemoval::AMinigame_ScratchRemoval(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_SCRATCH;
    this->GarageMingameType = EGarageMinigame::SCRATCH_REMOVER;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->ScratchFixObject = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScratchFixObject"));
    this->DoorSide = EDoorSide::RIGHT;
    this->ScratchHitSound = NULL;
    this->ScratchSuccessfullyRemovedSound = NULL;
    this->ScratchClass = NULL;
    this->bRemovingScratches = false;
    this->MinScratches = 1;
    this->MaxScratches = 5;
    this->DecalFound = NULL;
    this->ScratchFixObject->SetupAttachment(RootComponent);
}

void AMinigame_ScratchRemoval::SpawnScratchDecals(int32 Amount) {
}

void AMinigame_ScratchRemoval::CheckIfMinigameComplete() {
}

void AMinigame_ScratchRemoval::CalculateDecalAmount() {
}


