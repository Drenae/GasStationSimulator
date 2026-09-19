#include "MagicLeapEyeTrackerFunctionLibrary.h"

UMagicLeapEyeTrackerFunctionLibrary::UMagicLeapEyeTrackerFunctionLibrary() {
}

bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState) {
    return false;
}

EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus() {
    return EMagicLeapEyeTrackingCalibrationStatus::None;
}


