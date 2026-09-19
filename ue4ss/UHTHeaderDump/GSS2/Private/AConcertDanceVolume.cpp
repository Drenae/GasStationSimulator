#include "AConcertDanceVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AAConcertDanceVolume::AAConcertDanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->CollisionBox = (UBoxComponent*)RootComponent;
    this->DanceMontageStartLoop = NULL;
    this->DanceMontageEnd = NULL;
    this->bIsDancing = false;
    this->bIsHoveringGuitar = false;
}

void AAConcertDanceVolume::StopDancing_Internal(const EInteractionOutput& Branches, bool bGamepadInitialized) {
}


void AAConcertDanceVolume::StartDancing_Internal(bool bIsPressed) {
}



void AAConcertDanceVolume::OnPlayerShowInteraction(AActor* InteractionActor) {
}

void AAConcertDanceVolume::OnPlayerHideInteraction(AActor* InteractionActor) {
}

void AAConcertDanceVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAConcertDanceVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAConcertDanceVolume::OnConcertStopped(ERVCamperLeftReason CamperLeftReason) {
}

void AAConcertDanceVolume::OnConcertStarted() {
}

void AAConcertDanceVolume::LockDancing() {
}

bool AAConcertDanceVolume::IsConcertActive() {
    return false;
}

void AAConcertDanceVolume::AddBinding(AGSSPlayerCharacter* Player) {
}


