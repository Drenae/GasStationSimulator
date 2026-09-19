#include "CommonInputPlatformBaseData.h"

FCommonInputPlatformBaseData::FCommonInputPlatformBaseData() {
    this->bSupported = false;
    this->DefaultInputType = ECommonInputType::MouseAndKeyboard;
    this->bSupportsMouseAndKeyboard = false;
    this->bSupportsGamepad = false;
    this->bCanChangeGamepadType = false;
    this->bSupportsTouch = false;
}

