#include "DanceFloor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

ADanceFloor::ADanceFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Music = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicAudioComponent"));
    this->NPCSounds = CreateDefaultSubobject<UAudioComponent>(TEXT("NPCSoundsAudioComponent"));
    this->MusicDuration = 0.00f;
    this->PartySpot = NULL;
    this->NumberOfDancingNPC = 0;
    this->PartyNPCAmount = 0;
    this->Music->SetupAttachment(RootComponent);
    this->NPCSounds->SetupAttachment(RootComponent);
}

void ADanceFloor::StopAllSounds() {
}

void ADanceFloor::StartDancing() {
}

void ADanceFloor::SortSpotsToDance(TArray<FSpotToDance>& OutSpotsToDance) {
}

void ADanceFloor::ResetNumberOfDancingNPC() {
}



void ADanceFloor::OnUfoUsed() {
}

void ADanceFloor::OnPartyUfoLoaded(FTransform Transform) {
}

void ADanceFloor::OnCloseOpenGasStation(bool bIsGasStationOpen) {
}

void ADanceFloor::MusicStopped() {
}

bool ADanceFloor::LeaveSpot(AAICharacterBase* AICharacter) {
    return false;
}

TSoftObjectPtr<USoundCue> ADanceFloor::GetSoundCue(int32 NumberOfFullBaskets, bool PartyFinished) {
    return NULL;
}

void ADanceFloor::FinishParty() {
}

void ADanceFloor::CheckIfDancingTime() {
}

void ADanceFloor::CheckIfAllNPCStoppedDancing() {
}

void ADanceFloor::CheckIfAllNPCOnDanceFloor() {
}

int32 ADanceFloor::AddToSpot(AAICharacterBase* Character, UArrowComponent*& Spot) {
    return 0;
}


