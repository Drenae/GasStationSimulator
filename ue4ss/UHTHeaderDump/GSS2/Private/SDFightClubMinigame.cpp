#include "SDFightClubMinigame.h"
#include "SDMinigameParticipantComponent.h"

ASDFightClubMinigame::ASDFightClubMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinigameParticipantsComponent = CreateDefaultSubobject<USDMinigameParticipantComponent>(TEXT("Minigame Participants Comp"));
    this->Bet = 0.00f;
    this->BetZone = ESDFightClubZone::None;
    this->FavouriteZone = ESDFightClubZone::None;
    this->UnderdogZone = ESDFightClubZone::None;
    this->FightClubBuilding = NULL;
    this->BlueWinRate = 0.00f;
    this->RedWinRate = 0.00f;
    this->DrawWinRate = 0.00f;
    this->FightActivityObj = NULL;
}

void ASDFightClubMinigame::StartFight() {
}

void ASDFightClubMinigame::SetBetZone(ESDFightClubZone InBetZone) {
}

void ASDFightClubMinigame::ResetBet() {
}

void ASDFightClubMinigame::PlaceBet(ESDFightClubZone InZone, float InBet, bool bForce) {
}

void ASDFightClubMinigame::OnWinRatesCalculated_Implementation() {
}

void ASDFightClubMinigame::OnGangActivityStarted(USDGangActivityObjBase* ActivityObj) {
}

void ASDFightClubMinigame::OnGangActivityEnded(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result) {
}

void ASDFightClubMinigame::OnFightStarted_Implementation(USDFightClubActivity* FightClubActivity) {
}

void ASDFightClubMinigame::OnFightEnded_Implementation(USDFightClubActivity* FightClubActivity) {
}

void ASDFightClubMinigame::OnFightClubPhaseChanged(ESDFightClubPhase Phase) {
}

float ASDFightClubMinigame::GetWinRate(ESDFightClubZone Zone) {
    return 0.0f;
}

USDMinigameParticipantComponent* ASDFightClubMinigame::GetMinigameParticipantsComponent() const {
    return NULL;
}

ASDFightClub* ASDFightClubMinigame::GetFightClubBuilding() {
    return NULL;
}

void ASDFightClubMinigame::ChangeBet(float Delta) {
}

bool ASDFightClubMinigame::CanStartFight() const {
    return false;
}

bool ASDFightClubMinigame::CanPlaceBet(ESDFightClubZone InZone) const {
    return false;
}


