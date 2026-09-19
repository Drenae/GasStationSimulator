#include "CraneAnimInstance.h"

UCraneAnimInstance::UCraneAnimInstance() {
    this->YawTurnRatio = 0.00f;
    this->bYawTurn = false;
    this->PitchRatio = 0.00f;
    this->bArmPitch = false;
    this->ArmExtendRatio = 0.00f;
    this->bArmExtending = false;
    this->MagnetZRatio = 0.00f;
    this->bMagnetTrans = false;
    this->CurrentCraneYaw = 0.00f;
    this->CurrentMagnetZPosition = 0.00f;
    this->CurrentArmPitch = 0.00f;
    this->CurrentarmExtension = 0.00f;
    this->ExtendArmSpeed = 1.00f;
    this->SideMovementSpeed = 1.00f;
    this->MoveArmVerticalSpeed = 1.00f;
    this->MoveArmHorizontalSpeed = 1.00f;
    this->SeanResetArmHorizontalSpeed = 1.00f;
    this->LowerMagnetSpeed = 1.00f;
    this->MinArmPitch = -25.00f;
    this->MaxArmPitch = 35.00f;
    this->MinArmExtension = -100.00f;
    this->MaxArmExtension = 0.00f;
    this->Epsilon = 0.00f;
    this->IsActive = false;
    this->IsSeanResetYawActive = false;
    this->MovementInput = 0.00f;
}

void UCraneAnimInstance::SetCurrentCraneYaw(float NewYaw) {
}

void UCraneAnimInstance::SetCurrentArmExtension(float NewArmExtension) {
}

void UCraneAnimInstance::InputAxisMoveArmVertical_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UCraneAnimInstance::InputAxisMoveArmHorizontal_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UCraneAnimInstance::InputAxisLowerMagnet_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

void UCraneAnimInstance::InputAxisExtendArm_Implementation(float Value, bool& MinLimitReached, bool& MaxLimitReached) {
}

float UCraneAnimInstance::GetSideMovementSpeed() {
    return 0.0f;
}

float UCraneAnimInstance::GetCurrentCraneYaw() {
    return 0.0f;
}

float UCraneAnimInstance::GetCurrentArmExtension() {
    return 0.0f;
}


