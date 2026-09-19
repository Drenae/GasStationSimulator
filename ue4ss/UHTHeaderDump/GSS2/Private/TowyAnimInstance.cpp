#include "TowyAnimInstance.h"

UTowyAnimInstance::UTowyAnimInstance() {
    this->PlatformTurn = 0.00f;
    this->PlatformUpDn = 0.00f;
    this->ArmFwd = 0.00f;
    this->MagnetDn = 0.00f;
    this->SimulateRope = 0.00f;
    this->PlatformTurnMinValue = 0.00f;
    this->PlatformTurnMaxValue = 0.00f;
    this->PlatformTurnStepFactor = 1.00f;
    this->PlatformElevateMinValue = 0.00f;
    this->PlatformElevateMaxValue = 0.00f;
    this->PlatformElevateStepFactor = 1.00f;
    this->ArmExtendMinValue = 0.00f;
    this->ArmExtendMaxValue = 0.00f;
    this->ArmExtendStepFactor = 1.00f;
    this->MagnetDownMinValue = 0.00f;
    this->MagnetDownMaxValue = 0.00f;
    this->MagnetDownStepFactor = 1.00f;
    this->SimulateRopeMinValue = 0.00f;
    this->SimulateRopeMaxValue = 0.00f;
}

void UTowyAnimInstance::InputAxisMoveArmVertical_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UTowyAnimInstance::InputAxisMoveArmHorizontal_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UTowyAnimInstance::InputAxisLowerMagnet_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UTowyAnimInstance::InputAxisExtendArm_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}


