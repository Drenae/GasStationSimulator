#include "Wheel.h"

AWheel::AWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsScrewed = false;
    this->WheelSide = EWheelSide_FourWheel::FRONT_LEFT;
}


