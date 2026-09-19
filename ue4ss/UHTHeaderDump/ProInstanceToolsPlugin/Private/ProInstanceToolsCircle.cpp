#include "ProInstanceToolsCircle.h"

AProInstanceToolsCircle::AProInstanceToolsCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumInstances = 10;
    this->Angle = 360.00f;
    this->Radius = 100.00f;
    this->RotationType = CircleInstanceRotationType_Default;
}


