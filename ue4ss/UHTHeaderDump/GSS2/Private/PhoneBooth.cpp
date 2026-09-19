#include "PhoneBooth.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

APhoneBooth::APhoneBooth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RingingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("RingingAudioComponent"));
    this->PickUpAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("PickUpAudioComponent"));
    this->CallAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("CallAudioComponent"));
    this->bIsCooldownActive = false;
    this->CallAudio->SetupAttachment(RootComponent);
    this->PickUpAudio->SetupAttachment(RootComponent);
    this->RingingAudio->SetupAttachment(RootComponent);
}

void APhoneBooth::StopRinging() {
}

void APhoneBooth::StartRinging() {
}

void APhoneBooth::SetCooldown(float CooldownDuration) {
}

bool APhoneBooth::IsOnCooldown() {
    return false;
}

void APhoneBooth::EndCooldown() {
}


