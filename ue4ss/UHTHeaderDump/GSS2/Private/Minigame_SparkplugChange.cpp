#include "Minigame_SparkplugChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ECharacterState.h"
#include "EGarageMinigame.h"
#include "GarageSkeletalMeshComponent.h"
#include "GarageStaticMeshComponent.h"

AMinigame_SparkplugChange::AMinigame_SparkplugChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MinigameState = ECharacterState::MINIGAME_GARAGE_SPARKPLUG;
    this->GarageMingameType = EGarageMinigame::SPARKPLUG_CHECK;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->SparkplugBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SparkplugBase"));
    this->SP_Cable_1 = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("SP_Cable_1"));
    this->SP_Cable_2 = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("SP_Cable_2"));
    this->SP_Cable_3 = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("SP_Cable_3"));
    this->SP_Cable_4 = CreateDefaultSubobject<UGarageSkeletalMeshComponent>(TEXT("SP_Cable_4"));
    this->SP_Cable_1_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cable_1_Ghost"));
    this->SP_Cable_2_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cable_2_Ghost"));
    this->SP_Cable_3_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cable_3_Ghost"));
    this->SP_Cable_4_Ghost = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cable_4_Ghost"));
    this->SP_Cap_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cap_1"));
    this->SP_Cap_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cap_2"));
    this->SP_Cap_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cap_3"));
    this->SP_Cap_4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SP_Cap_4"));
    this->sparkplug_1 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("sparkplug_1"));
    this->sparkplug_2 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("sparkplug_2"));
    this->sparkplug_3 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("sparkplug_3"));
    this->sparkplug_4 = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("sparkplug_4"));
    this->Sparkplug_1_Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Sparkplug_1_Ghost"));
    this->Sparkplug_2_Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Sparkplug_2_Ghost"));
    this->Sparkplug_3_Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Sparkplug_3_Ghost"));
    this->Sparkplug_4_Ghost = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Sparkplug_4_Ghost"));
    this->Wrench_Mesh = CreateDefaultSubobject<UGarageStaticMeshComponent>(TEXT("Wrench_SkMC"));
    this->ScrewUnscrewTime = 2.00f;
    this->bHoldingPrimary = false;
    this->bHoldingSecondary = false;
    this->CurScrewUnscrewTime = 0.00f;
    this->BrokenPlugValue = -1;
    this->bScrewingUnscrewing = false;
    this->ChosenSparkplug = NULL;
    this->ChosenSparkplugGhost = NULL;
    this->ChosenCap = NULL;
    this->ChosenGhostCable = NULL;
    this->ChosenCable = NULL;
    this->SP_Cable_1->SetupAttachment(SparkplugBase);
    this->SP_Cable_1_Ghost->SetupAttachment(SparkplugBase);
    this->SP_Cable_2->SetupAttachment(SparkplugBase);
    this->SP_Cable_2_Ghost->SetupAttachment(SparkplugBase);
    this->SP_Cable_3->SetupAttachment(SparkplugBase);
    this->SP_Cable_3_Ghost->SetupAttachment(SparkplugBase);
    this->SP_Cable_4->SetupAttachment(SparkplugBase);
    this->SP_Cable_4_Ghost->SetupAttachment(SparkplugBase);
    this->SP_Cap_1->SetupAttachment(SparkplugBase);
    this->SP_Cap_2->SetupAttachment(SparkplugBase);
    this->SP_Cap_3->SetupAttachment(SparkplugBase);
    this->SP_Cap_4->SetupAttachment(SparkplugBase);
    this->SparkplugBase->SetupAttachment(RootComponent);
    this->Sparkplug_1_Ghost->SetupAttachment(SparkplugBase);
    this->Sparkplug_2_Ghost->SetupAttachment(SparkplugBase);
    this->Sparkplug_3_Ghost->SetupAttachment(SparkplugBase);
    this->Sparkplug_4_Ghost->SetupAttachment(SparkplugBase);
    this->Wrench_Mesh->SetupAttachment(SparkplugBase);
    this->sparkplug_1->SetupAttachment(SparkplugBase);
    this->sparkplug_2->SetupAttachment(SparkplugBase);
    this->sparkplug_3->SetupAttachment(SparkplugBase);
    this->sparkplug_4->SetupAttachment(SparkplugBase);
}

void AMinigame_SparkplugChange::SetScrewingUnscrewing(bool bNewValue) {
}

void AMinigame_SparkplugChange::SelectActiveParts() {
}


