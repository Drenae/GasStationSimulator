#include "CamperWashingSettingsPerDifficulty.h"

FCamperWashingSettingsPerDifficulty::FCamperWashingSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->CleaningSolutionTriggerDuration = 0.00f;
    this->EcoBonus = 0.00f;
}

