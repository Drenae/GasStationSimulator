#include "Towy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ATowy::ATowy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->exhaust = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("exhaust"));
    this->SmokeHeatLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeHeatLeft"));
    this->SmokeHeatRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeHeatRight"));
    this->SmokeRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeRight"));
    this->SmokeLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeLeft"));
    this->CoolingLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CoolingLeft"));
    this->CoolingRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CoolingRight"));
    this->OverheatLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OverheatLeft"));
    this->OverheatRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OverheatRight"));
    this->MagnetArmComponent = NULL;
    this->CyllinderActionRange = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagnetRange"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("AttractedActorTransform"));
    this->HorizontalBlockBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HorizontalBlock"));
    this->VerticalBlockBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VerticalBlock"));
    this->bMagnetMode = false;
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->CoolingLeft->SetupAttachment(exhaust);
    this->CoolingRight->SetupAttachment(exhaust);
    this->CyllinderActionRange->SetupAttachment(RootComponent);
    this->HorizontalBlockBoxComponent->SetupAttachment(RootComponent);
    this->OverheatLeft->SetupAttachment(exhaust);
    this->OverheatRight->SetupAttachment(exhaust);
    this->SmokeHeatLeft->SetupAttachment(exhaust);
    this->SmokeHeatRight->SetupAttachment(exhaust);
    this->SmokeLeft->SetupAttachment(exhaust);
    this->SmokeRight->SetupAttachment(exhaust);
    this->VerticalBlockBoxComponent->SetupAttachment(RootComponent);
    this->exhaust->SetupAttachment(RootComponent);
}

void ATowy::InputActionChangeMode_Implementation(bool bPressed) {
}

void ATowy::ChangeModeAction_Released() {
}

void ATowy::ChangeModeAction_Pressed() {
}


