#include "DishwashingSettingsPerDifficulty.h"

FDishwashingSettingsPerDifficulty::FDishwashingSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->EcoBonus = 0.00f;
    this->EcoPlusBonus = 0.00f;
    this->MaxWaterFlowDuration = 0.00f;
}

