#include "LaundrySettings.h"

ULaundrySettings::ULaundrySettings() {
    this->LeverStartSpeed = 160.00f;
    this->LeverHitSpeedIncreaseEasy = 25.00f;
    this->LeverHitSpeedIncreaseMedium = 35.00f;
    this->LeverHitSpeedIncreaseHard = 50.00f;
    this->HitTargetSizeInDegreesNormal = 18.00f;
    this->HitTargetSizeInDegreesMedium = 10.00f;
    this->HitTargetSizeInDegreesHard = 7.00f;
    this->WashProgressPerRotation = 0.05f;
    this->WashProgressIncrement = 0.01f;
    this->LeverBoostSpeed = 120.00f;
    this->LeverBoostOverTime = 125.00f;
    this->AfterFailDelay = 1.50f;
}


