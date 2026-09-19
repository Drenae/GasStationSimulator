#include "RvMinigameInWorldShootingRange.h"

ARvMinigameInWorldShootingRange::ARvMinigameInWorldShootingRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChosenDifficultyREF = EGuestServiceDifficulty::EASY;
    this->GameEnded = false;
    this->GameTime = 0.00f;
    this->PlayerTotalScore = 0.00f;
    this->OponentTotalScore = 0.00f;
    this->ReloadTime = 0.00f;
    this->CurrentAmmo = 0;
    this->MaxAmmo = 0;
    this->IsReloading = false;
    this->ShootingRangeSettingsREF = NULL;
    this->OpenentShootingDelayMin = 0.00f;
    this->OpenentShootingDelayMax = 0.00f;
    this->TargetSpeed = 0.00f;
    this->TargetRespawnRate = 0.00f;
    this->TargetFoldMin = 0.00f;
    this->TargetFoldMax = 0.00f;
    this->RandomizeRailsType = false;
    this->OponentCurrentTarget = NULL;
    this->bForceNextTargetRed = false;
    this->bBlockSpawning = false;
}

void ARvMinigameInWorldShootingRange::UpdateGameTimer() {
}

void ARvMinigameInWorldShootingRange::TryToShootBullet() {
}

void ARvMinigameInWorldShootingRange::StartTimer() {
}

void ARvMinigameInWorldShootingRange::StartReloading() {
}

void ARvMinigameInWorldShootingRange::ShootTarget() {
}

void ARvMinigameInWorldShootingRange::SetupShootingRangeStartValues() {
}

void ARvMinigameInWorldShootingRange::SetupShootingRangeRails() {
}

void ARvMinigameInWorldShootingRange::SetupShootingRangeDifficultyValues() {
}

void ARvMinigameInWorldShootingRange::OnTimeEnded() {
}

void ARvMinigameInWorldShootingRange::OnReloadLogicEnds() {
}

void ARvMinigameInWorldShootingRange::GuaranteeRedTeam() {
}

void ARvMinigameInWorldShootingRange::GameEndDelay() {
}

void ARvMinigameInWorldShootingRange::BeginShootingRangeGame() {
}

void ARvMinigameInWorldShootingRange::AddPlayerTotalScore(float ScoreToAdd) {
}

void ARvMinigameInWorldShootingRange::AddOponentTotalScore(float ScoreToAdd) {
}


