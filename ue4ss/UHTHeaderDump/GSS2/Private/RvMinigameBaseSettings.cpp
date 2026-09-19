#include "RvMinigameBaseSettings.h"

URvMinigameBaseSettings::URvMinigameBaseSettings() {
    this->bUseDefaultDifficulty = true;
    this->DefaultDifficulty = EGuestServiceDifficulty::EASY;
    this->LateStartDelay = 0.00f;
    this->LateEndDelay = 0.00f;
    this->bOverrideCameraFOV = true;
    this->CameraFOV = 90.00f;
    this->AutocompleteDuration = 15.00f;
    this->TutorialType = EGameActivityType::DIGGER;
}


