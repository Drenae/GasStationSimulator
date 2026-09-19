#include "BBQSettingsPerDifficulty.h"

FBBQSettingsPerDifficulty::FBBQSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->PerfectStateThreshold = 0.00f;
    this->MoveToCookingSpotCooldown = 0.00f;
    this->CookingGridHeight = 0;
    this->CookingGridWidth = 0;
    this->AllowedMistakes = 0;
    this->CookingSpeedOnGamepad = 0.00f;
}

