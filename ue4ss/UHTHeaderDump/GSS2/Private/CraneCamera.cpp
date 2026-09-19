#include "CraneCamera.h"

UCraneCamera::UCraneCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraIndex = 0;
    this->LimitHorizontalRotation = true;
    this->HorizontalRotationMin = -30.00f;
    this->HorizontalRotationMax = 30.00f;
    this->VerticalRotationMin = -30.00f;
    this->VerticalRotationMax = 30.00f;
}

void UCraneCamera::RotateByRotator(FRotator Rotation) {
}

float UCraneCamera::NormalizeAngle(float Angle) {
    return 0.0f;
}


