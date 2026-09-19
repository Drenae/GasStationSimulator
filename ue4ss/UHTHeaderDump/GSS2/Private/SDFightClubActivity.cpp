#include "SDFightClubActivity.h"

USDFightClubActivity::USDFightClubActivity() {
    this->CurrentAttackerZone = ESDFightClubZone::None;
    this->MaxClashNum = 3;
    this->RedZoneLockerMinigame = NULL;
    this->BlueZoneLockerMinigame = NULL;
    this->CurrentClashNum = 0;
    this->RedFighterHP = 10;
    this->BlueFighterHP = 10;
    this->RedDiceThrowRes = 0;
    this->BlueDiceThrowRes = 0;
    this->BlueJudgesPointsSum = 0;
    this->RedJudgesPointsSum = 0;
    this->FightClubBuilding = NULL;
}

void USDFightClubActivity::StartClash() {
}

void USDFightClubActivity::PredictAttackResult() {
}

void USDFightClubActivity::OnClashStarted_Implementation() {
}

void USDFightClubActivity::OnAttackResultPredicted_Implementation(ESDFightClubAttackResult Result) {
}

int32 USDFightClubActivity::GetFighterHP(ESDFightClubZone InZone) const {
    return 0;
}

FSDFighterAttributes USDFightClubActivity::GetFighterFinalAttrs(ESDFightClubZone InZone) const {
    return FSDFighterAttributes{};
}

ESDFightClubZone USDFightClubActivity::GetDefenderZone() const {
    return ESDFightClubZone::None;
}

ESDFightClubZone USDFightClubActivity::GetAttackerZone() const {
    return ESDFightClubZone::None;
}

void USDFightClubActivity::EndFight_Implementation(ESDFightClubZone Winner, ESDFightClubWinReason WinReason) {
}

void USDFightClubActivity::ApplyAttackResult_Implementation(ESDFightClubAttackResult Result) {
}


