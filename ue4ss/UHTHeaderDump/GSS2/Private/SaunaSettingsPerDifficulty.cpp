#include "SaunaSettingsPerDifficulty.h"

FSaunaSettingsPerDifficulty::FSaunaSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->PlayerMovementSpeed = 0.00f;
    this->ObstacleDotsAmount = 0;
    this->ObstacleDotWarmUp = 0.00f;
    this->TargetDotWarmUp = 0.00f;
    this->TargetsToCollect = 0;
    this->AllowedMistakes = 0;
    this->MinSplineTimeBetweenCollectibleDots = 0.00f;
    this->MinSplineTimeBetweenObstacleAndTargetDot = 0.00f;
    this->MinSplineTimeBetweenTargetDotAndPlayer = 0.00f;
    this->MinSplineTimeBetweenObstacleDots = 0.00f;
    this->MinSplineTimeBetweenObstacleDotsAndPlayer = 0.00f;
}

