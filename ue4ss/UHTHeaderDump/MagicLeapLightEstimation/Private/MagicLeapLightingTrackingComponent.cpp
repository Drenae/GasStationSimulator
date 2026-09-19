#include "MagicLeapLightingTrackingComponent.h"

UMagicLeapLightingTrackingComponent::UMagicLeapLightingTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseGlobalAmbience = false;
    this->UseColorTemp = false;
}


