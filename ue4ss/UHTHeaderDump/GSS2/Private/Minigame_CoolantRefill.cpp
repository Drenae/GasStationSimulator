#include "Minigame_CoolantRefill.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"

AMinigame_CoolantRefill::AMinigame_CoolantRefill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_COOLANT;
    this->GarageMingameType = EGarageMinigame::COOLANT_CHECK;
    this->SafeZoneSize = 10.00f;
    this->CoolantAmountPerSecond = 10.00f;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CoolantBottle_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoolantBottle_SMC"));
    this->CoolantReciever_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoolantReciever_SMC"));
    this->CoolantSpill_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoolantSpill_SMC"));
    this->CoolantLiquid_VFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CoolantLiquid_VFXComponent"));
    this->MinigameWidgetClass = NULL;
    this->CoolantCheckWidget = NULL;
    this->CurrentCoolantAmount = 0.00f;
    this->bAddingCoolant = false;
    this->RiseTime = 0.50f;
    this->curTime = 0.00f;
    this->CoolantDepthMID = NULL;
    this->bAddingCoolantStarted = false;
    this->StartingCoolantAmount = 0.00f;
    this->SafeZoneMin = 0.00f;
    this->SafeZoneMax = 0.00f;
    this->bReachedAddValue = false;
    this->bFailedNotification = false;
    this->CoolantLoopSound = NULL;
    this->CoolantOverflowSound = NULL;
    this->CoolantBottle_SMC->SetupAttachment(RootComponent);
    this->CoolantLiquid_VFXComponent->SetupAttachment(CoolantBottle_SMC);
    this->CoolantReciever_SMC->SetupAttachment(RootComponent);
    this->CoolantSpill_SMC->SetupAttachment(CoolantBottle_SMC);
}

void AMinigame_CoolantRefill::UpdateCoolant_Visuals() {
}

void AMinigame_CoolantRefill::SelectSafeZone() {
}

void AMinigame_CoolantRefill::CheckResults() {
}


