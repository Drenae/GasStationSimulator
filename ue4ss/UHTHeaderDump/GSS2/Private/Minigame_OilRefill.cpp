#include "Minigame_OilRefill.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"

AMinigame_OilRefill::AMinigame_OilRefill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_OIL;
    this->GarageMingameType = EGarageMinigame::OIL_CHECK;
    this->SafeZoneSize = 10.00f;
    this->OilAmountPerSecond = 10.00f;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OilBottle_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OilBottle_SMC"));
    this->OilCap_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OilCap_SMC"));
    this->OilSpill_SMC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OilSpill_SMC"));
    this->OilLiquid_VFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OilLiquid_VFXComponent"));
    this->MinigameWidgetClass = NULL;
    this->OilCheckWidget = NULL;
    this->CurrentOilAmount = 0.00f;
    this->bAddingOil = false;
    this->RiseTime = 0.50f;
    this->curTime = 0.00f;
    this->OilDepthMID = NULL;
    this->bAddingOilStarted = false;
    this->bReachedAddValue = false;
    this->bFailedNotification = false;
    this->StartingOilAmount = 0.00f;
    this->SafeZoneMin = 0.00f;
    this->SafeZoneMax = 0.00f;
    this->OilLoopSound = NULL;
    this->OilOverflowSound = NULL;
    this->OilBottle_SMC->SetupAttachment(RootComponent);
    this->OilCap_SMC->SetupAttachment(RootComponent);
    this->OilLiquid_VFXComponent->SetupAttachment(OilBottle_SMC);
    this->OilSpill_SMC->SetupAttachment(OilBottle_SMC);
}

void AMinigame_OilRefill::UpdateOil_Visuals() {
}

void AMinigame_OilRefill::SelectSafeZone() {
}

void AMinigame_OilRefill::CheckResults() {
}


