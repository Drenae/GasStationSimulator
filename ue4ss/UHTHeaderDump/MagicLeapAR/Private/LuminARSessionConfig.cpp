#include "LuminARSessionConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=EARLightEstimationMode -FallbackName=EARLightEstimationMode

ULuminARSessionConfig::ULuminARSessionConfig() {
    this->LightEstimationMode = EARLightEstimationMode::None;
    this->MaxPlaneQueryResults = 200;
    this->MinPlaneArea = 400;
    this->bArbitraryOrientationPlaneDetection = false;
    this->bDiscardZeroExtentPlanes = true;
    this->bDefaultUseUnreliablePose = false;
}


