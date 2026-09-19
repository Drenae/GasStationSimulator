#include "Minigame_CarBattery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"
#include "GarageSkeletalMeshComponent.h"
#include "GarageStaticMeshComponent.h"

AMinigame_CarBattery::AMinigame_CarBattery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_CARBATTERY;
    this->GarageMingameType = EGarageMinigame::BATTERY_CHECK;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Battery_SMC = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Battery_SMC"));
    this->Battery_Cable_L_SkMC = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("Battery_Cable_L_SkMC"));
    this->Battery_Cable_R_SkMC = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("Battery_Cable_R_SkMC"));
    this->Battery_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Battery_Ghost"));
    this->Battery_Cable_L_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Battery_Cable_L_Ghost"));
    this->Battery_Cable_R_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Battery_Cable_R_Ghost"));
    this->SelectedPart = NULL;
    this->GamePadDirection = 0.00f;
    this->IsSelectedLeft = true;
    this->Battery_Cable_L_Ghost->SetupAttachment(Battery_Ghost);
    this->Battery_Cable_L_SkMC->SetupAttachment(Battery_SMC);
    this->Battery_Cable_R_Ghost->SetupAttachment(Battery_Ghost);
    this->Battery_Cable_R_SkMC->SetupAttachment(Battery_SMC);
    this->Battery_Ghost->SetupAttachment(RootComponent);
    this->Battery_SMC->SetupAttachment(RootComponent);
}


