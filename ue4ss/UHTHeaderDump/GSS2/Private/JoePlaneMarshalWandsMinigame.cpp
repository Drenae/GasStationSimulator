#include "JoePlaneMarshalWandsMinigame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AJoePlaneMarshalWandsMinigame::AJoePlaneMarshalWandsMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootSphere"));
    this->RootSphere = (USphereComponent*)RootComponent;
    this->MainMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshComponent"));
    this->WheelsMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelsMeshComponent"));
    this->PropellerMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PropellerMeshComponent"));
    this->RadderMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RadderMeshComp"));
    this->ElevatorMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMeshComp"));
    this->StablilzerLeftMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StablilzerLeftMeshComp"));
    this->StablilzerRightMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StablilzerRightMeshComp"));
    this->WingLeftMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingLeftMeshComp"));
    this->WingRightMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingRightMeshComp"));
    this->WingRopesMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingRopesMeshComp"));
    this->AileronLeftTopMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronLeftMeshComp"));
    this->AileronLeftBottomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronLeftBottomMeshComp"));
    this->AileronRightTopMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronRightMeshComp"));
    this->AileronRightBottomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronRightBottomMeshComp"));
    this->AudioComponent_Start = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_Start"));
    this->AudioComponent_LowToHigh = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_LowToHigh"));
    this->AudioComponent_HighLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_High"));
    this->AudioFade_LowToHighTime = 2.00f;
    this->AudioFade_HighTime = 5.00f;
    this->PropellerSpeed = 7.00f;
    this->WheelsSpeed = 3.00f;
    this->AscendPitchMultiplier = 40.00f;
    this->MaxPitchDuringAscend = 45.00f;
    this->RollAddedPerTickInAscend = 4.00f;
    this->RollDirection = 0;
    this->LastAppliedPitch = 0.00f;
    this->AileronLeftBottomMeshComp->SetupAttachment(RootComponent);
    this->AileronLeftTopMeshComp->SetupAttachment(RootComponent);
    this->AileronRightBottomMeshComp->SetupAttachment(RootComponent);
    this->AileronRightTopMeshComp->SetupAttachment(RootComponent);
    this->AudioComponent_HighLoop->SetupAttachment(RootComponent);
    this->AudioComponent_LowToHigh->SetupAttachment(RootComponent);
    this->AudioComponent_Start->SetupAttachment(RootComponent);
    this->ElevatorMeshComp->SetupAttachment(RootComponent);
    this->MainMeshComponent->SetupAttachment(RootComponent);
    this->PropellerMeshComp->SetupAttachment(RootComponent);
    this->RadderMeshComp->SetupAttachment(RootComponent);
    this->StablilzerLeftMeshComp->SetupAttachment(RootComponent);
    this->StablilzerRightMeshComp->SetupAttachment(RootComponent);
    this->WheelsMeshComp->SetupAttachment(RootComponent);
    this->WingLeftMeshComp->SetupAttachment(RootComponent);
    this->WingRightMeshComp->SetupAttachment(RootComponent);
    this->WingRopesMeshComp->SetupAttachment(RootComponent);
}

void AJoePlaneMarshalWandsMinigame::SetAileronAndRadderRotation(float RotationDegrees) {
}

void AJoePlaneMarshalWandsMinigame::MovePlaneForward(FRotator Rotation, float Speed) {
}

void AJoePlaneMarshalWandsMinigame::AudioFade_Start() {
}

void AJoePlaneMarshalWandsMinigame::AudioFade_LowToHigh() {
}

void AJoePlaneMarshalWandsMinigame::AudioFade_High() {
}

void AJoePlaneMarshalWandsMinigame::AscendPlane(float AscendPitch, float Speed) {
}


