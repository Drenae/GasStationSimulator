#include "CarWashPistol.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACarWashPistol::ACarWashPistol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarWashPistol_SkMC"));
    this->DrawDebug = true;
    this->CarWashPistol = (UStaticMeshComponent*)RootComponent;
    this->Nozzle = CreateDefaultSubobject<UChildActorComponent>(TEXT("Nozzle"));
    this->bIsPickedUp = false;
    this->PistolRangeBeforeReset = 500.00f;
    this->NozzleIndex = 0;
    this->DistanceCheckTime = 1.00f;
    this->TimeSinceLastDistanceCheck = 0.00f;
    this->ActionsAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ActionsAudioComponent"));
    this->LoopAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("LoopAudioComponent"));
    this->RotateNozzleSound = NULL;
    this->SwitchNozzleSound = NULL;
    this->PickUpPistolSound = NULL;
    this->PutDownPistolSound = NULL;
    this->Mid = NULL;
    this->CarWashParamCollection = NULL;
    this->ActionsAudioComponent->SetupAttachment(RootComponent);
    this->LoopAudioComponent->SetupAttachment(RootComponent);
    this->Nozzle->SetupAttachment(RootComponent);
}

void ACarWashPistol::WashLineTraceFromLocationDirectional(FVector StartLocation, FVector Direction, FVector SpraySpreadDirection) {
}

void ACarWashPistol::WashLineTrace() {
}

void ACarWashPistol::VFXFireActivation(bool bActivate) {
}


void ACarWashPistol::StopShiningMaterial() {
}

void ACarWashPistol::StopFiring() {
}

void ACarWashPistol::ShineMaterial() {
}

void ACarWashPistol::SetWashingStrength() {
}


void ACarWashPistol::SecondaryAction(bool bPressed) {
}

void ACarWashPistol::PutDown() {
}

void ACarWashPistol::PrimaryAction(bool bPressed) {
}

void ACarWashPistol::PistolDistanceCheck() {
}

void ACarWashPistol::PickUpByPawn(APawn* Pawn) {
}

void ACarWashPistol::IncrementNozzle(int32 IncrementValue) {
}

UNiagaraComponent* ACarWashPistol::GetVFXSystem() {
    return NULL;
}

ACarWashPistolNozzle* ACarWashPistol::GetNozzle() {
    return NULL;
}

bool ACarWashPistol::GetIsPickedUp() {
    return false;
}

UStaticMeshComponent* ACarWashPistol::GetCarWashPistol() {
    return NULL;
}

void ACarWashPistol::ExtraAction(bool bPressed) {
}


