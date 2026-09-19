#include "RvMinigameWidget.h"

URvMinigameWidget::URvMinigameWidget() {
    this->ServiceSpotRef = NULL;
    this->DifficultySelected = EGuestServiceDifficulty::EASY;
    this->bTutorialOpened = false;
}

void URvMinigameWidget::StartMiniGame_Implementation(FGameplayTag ServiceTag, ARvGuestServiceSpot* TargetServiceSpot, EGuestServiceDifficulty Difficulty) {
}

void URvMinigameWidget::SetTutorialOpened_Implementation(bool bOpen) {
}

void URvMinigameWidget::SetPhase_Implementation(FName Phase) {
}

bool URvMinigameWidget::IsTutorialOpened() const {
    return false;
}

FName URvMinigameWidget::GetCurrentPhase() const {
    return NAME_None;
}

float URvMinigameWidget::GetCooldownPercentageBonus_Implementation() {
    return 0.0f;
}

void URvMinigameWidget::EndMinigame_Implementation(bool bSuccess, FRVServiceExperienceData ExperienceData) {
}


