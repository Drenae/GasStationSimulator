#include "WoodChoppingSettings.h"

UWoodChoppingSettings::UWoodChoppingSettings() {
    this->MaxLogsToCute = 3;
    this->SuccessTolerance = 4;
    this->SliceRecoilStrength = 250.00f;
    this->BestRatioScoreMin = 50.00f;
    this->BestRatioScoreMax = 50.00f;
    this->MidRatioScoreMin = 49.00f;
    this->MidRatioScoreMax = 51.00f;
    this->LowRatioScoreMin = 48.00f;
    this->LowRatioScoreMax = 52.00f;
    this->GamepadMovementSmoothSpeed = 10.00f;
    this->CutDistanceFromCenter = 50.00f;
}


