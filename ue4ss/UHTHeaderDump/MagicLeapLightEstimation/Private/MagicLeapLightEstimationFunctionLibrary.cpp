#include "MagicLeapLightEstimationFunctionLibrary.h"

UMagicLeapLightEstimationFunctionLibrary::UMagicLeapLightEstimationFunctionLibrary() {
}

bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid() {
    return false;
}

bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState) {
    return false;
}

bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState) {
    return false;
}

void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker() {
}

bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker() {
    return false;
}


