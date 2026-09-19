#include "CommonInputSettings.h"

UCommonInputSettings::UCommonInputSettings() {
    this->bEnableInputMethodThrashingProtection = true;
    this->InputMethodThrashingLimit = 30;
    this->InputMethodThrashingWindowInSeconds = 3.00f;
    this->InputMethodThrashingCooldownInSeconds = 1.00f;
    this->bAllowOutOfFocusDeviceInput = false;
    this->InputDataClass = NULL;
}

TArray<FName> UCommonInputSettings::GetRegisteredPlatforms() {
    return TArray<FName>();
}


