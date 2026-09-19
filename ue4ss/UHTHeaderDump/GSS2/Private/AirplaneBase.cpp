#include "AirplaneBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"

AAirplaneBase::AAirplaneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshComponent"));
    this->MainMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->WheelsMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelsMeshComponent"));
    this->PropellerMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PropellerMeshComponent"));
    this->RadderMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RadderMeshComp"));
    this->ElevatorMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMeshComp"));
    this->AileronLeftTopMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronLeftMeshComp"));
    this->AileronLeftBottomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronLeftBottomMeshComp"));
    this->AileronRightTopMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronRightMeshComp"));
    this->AileronRightBottomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AileronRightBottomMeshComp"));
    this->WingRopesMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingRopesMeshComp"));
    this->AudioComponent_Start = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_Start"));
    this->AudioComponent_LowToHigh = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_LowToHigh"));
    this->AudioComponent_HighLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_High"));
    this->AudioComponent_Passby = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_Passby"));
    this->FuelEnterComp = CreateDefaultSubobject<UChildActorComponent>(TEXT("FuelEnterComponent"));
    this->AirplaneInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("AirplaneInventory"));
    this->AudioFade_LowToHighTime = 2.00f;
    this->AudioFade_HighTime = 5.00f;
    this->AudioFadeOutDuration = 0.25f;
    this->PropellerSpeed = 7.00f;
    this->WheelsSpeed = 3.00f;
    this->AscendPitchMultiplier = 60.00f;
    this->MaxPitchDuringAscend = 30.00f;
    this->MinPitchDuringAscend = 15.00f;
    this->StartRollingPitch = 25.00f;
    this->RollAddedPerTickInAscend = 5.00f;
    this->RollDirection = 0;
    this->LastAppliedPitch = 0.00f;
    this->bIsPlaneRefilled = false;
    this->AileronLeftBottomMeshComp->SetupAttachment(RootComponent);
    this->AileronLeftTopMeshComp->SetupAttachment(RootComponent);
    this->AileronRightBottomMeshComp->SetupAttachment(RootComponent);
    this->AileronRightTopMeshComp->SetupAttachment(RootComponent);
    this->AudioComponent_HighLoop->SetupAttachment(RootComponent);
    this->AudioComponent_LowToHigh->SetupAttachment(RootComponent);
    this->AudioComponent_Passby->SetupAttachment(RootComponent);
    this->AudioComponent_Start->SetupAttachment(RootComponent);
    this->ElevatorMeshComp->SetupAttachment(RootComponent);
    this->FuelEnterComp->SetupAttachment(RootComponent);
    this->PropellerMeshComp->SetupAttachment(RootComponent);
    this->RadderMeshComp->SetupAttachment(RootComponent);
    this->WheelsMeshComp->SetupAttachment(RootComponent);
    this->WingRopesMeshComp->SetupAttachment(RootComponent);
}

void AAirplaneBase::StopAllSounds() {
}

void AAirplaneBase::StartPlaneAudio() {
}

void AAirplaneBase::StartMarshalWandsMinigame() {
}

void AAirplaneBase::SetAileronAndRadderRotation(float RotationDegrees) {
}

void AAirplaneBase::ResumePlaneAudio() {
}

void AAirplaneBase::PausePlaneAudio() {
}

void AAirplaneBase::MovePlaneForward(FRotator Rotation, float Speed) {
}

UStaticMeshComponent* AAirplaneBase::GetMainMesh() {
    return NULL;
}

UInventoryComponent* AAirplaneBase::GetAirplaneInventory() {
    return NULL;
}

void AAirplaneBase::FadeOutAllSounds() {
}

void AAirplaneBase::AudioFade_Start() {
}

void AAirplaneBase::AudioFade_LowToHigh() {
}

void AAirplaneBase::AudioFade_High() {
}

void AAirplaneBase::AscendPlane(float AscendPitch, float Speed) {
}


