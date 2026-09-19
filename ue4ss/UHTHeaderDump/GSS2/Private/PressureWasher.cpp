#include "PressureWasher.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

APressureWasher::APressureWasher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->SparksParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SparksParticles"));
    this->SmokeParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SmokeParticles"));
    this->LoopAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("LoopAudioComponent"));
    this->ActionsAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ActionsAudioComponent"));
    this->WaterSplashStartEndAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterSpalshStartEndAudioComponent"));
    this->WaterSplashLoopAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterSpalshLoopAudioComponent"));
    this->bIsFiring = false;
    this->MaxRangeFromStationBeforeReset = 1000.00f;
    this->MaxRangeFromHolderBeforeReset = 500.00f;
    this->NumberOfTraces = 1;
    this->TraceOffset = 0.00f;
    this->TraceDistance = 1000.00f;
    this->VInterpSpeed = 5.00f;
    this->RInterpSpeed = 5.00f;
    this->PickUpSound = NULL;
    this->PutDownSound = NULL;
    this->WashingStartSound = NULL;
    this->WashingLoopSound = NULL;
    this->WashingStopSound = NULL;
    this->SpalshStart = NULL;
    this->SpalshLoop = NULL;
    this->SpalshEnd = NULL;
    this->FadeOutTime = 0.10f;
    this->FadeInTime = 0.10f;
    this->DistanceCheckTime = 1.00f;
    this->TimeSinceLastDistanceCheck = 0.00f;
    this->AlertCooldownDuration = 3.00f;
    this->CurrentAlertCooldown = 0.00f;
    this->bAlertCooldown = false;
    this->LastTargetedWreck = NULL;
    this->ActionsAudioComponent->SetupAttachment(RootComponent);
    this->LoopAudioComponent->SetupAttachment(RootComponent);
    this->SmokeParticles->SetupAttachment(RootComponent);
    this->SparksParticles->SetupAttachment(RootComponent);
    this->WaterSplashLoopAudioComponent->SetupAttachment(RootComponent);
    this->WaterSplashStartEndAudioComponent->SetupAttachment(RootComponent);
}

void APressureWasher::StopWashing_Implementation() {
}


void APressureWasher::StartWashing_Implementation() {
}


void APressureWasher::ReattachToPlayer() {
}

void APressureWasher::PrimaryAction(bool bPressed) {
}

void APressureWasher::OnPutDown_Implementation() {
}

void APressureWasher::OnPickUp(APawn* PickedUpPawn) {
}

bool APressureWasher::GetIsPickedUp() {
    return false;
}

void APressureWasher::DisplayWarningPlatformPrompt() {
}

void APressureWasher::DisplayWarningPartsPrompt() {
}

void APressureWasher::CheckDistanceFromStation() {
}

void APressureWasher::CheckDistanceFromHolder() {
}


