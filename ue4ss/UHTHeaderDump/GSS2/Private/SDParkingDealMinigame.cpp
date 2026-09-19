#include "SDParkingDealMinigame.h"
#include "SDMinigameParticipantComponent.h"

ASDParkingDealMinigame::ASDParkingDealMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinigameParticipantsComponent = CreateDefaultSubobject<USDMinigameParticipantComponent>(TEXT("Minigame Participants Comp"));
}

void ASDParkingDealMinigame::OnReadyToDeal_Implementation(USDMinigameParticipantComponent* MinigameParticipantComponent) {
}


