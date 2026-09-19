#include "RvLevelingSettings.h"

URvLevelingSettings::URvLevelingSettings() {
    this->PressDelay_Easy = 0.50f;
    this->PressDelay_Medium = 0.50f;
    this->PressDelay_Hard = 0.50f;
    this->PressDelayInitial_Easy = 0.50f;
    this->PressDelayInitial_Medium = 0.50f;
    this->PressDelayInitial_Hard = 0.50f;
    this->FillBarDuration_Easy = 3.00f;
    this->FillBarDuration_Medium = 3.00f;
    this->FillBarDuration_Hard = 3.00f;
    this->EasyLevelRange = 0.00f;
    this->MediumLevelRange = 0.00f;
    this->HardLevelRange = 0.00f;
    this->AccelerationForward_Easy = 2.00f;
    this->AccelerationForward_Medium = 2.00f;
    this->AccelerationForward_Hard = 2.00f;
    this->Deccelaration = 2.00f;
    this->AccelerationBackward = 2.00f;
    this->AccelerationBackward_Medium = 2.00f;
    this->AccelerationBackward_Hard = 2.00f;
    this->EngineRPMFillDuration = 3.00f;
    this->EngineRPMLoweringSmoothRate = 5.00f;
    this->EngineRPMRisingSmoothRate = 10.00f;
}


