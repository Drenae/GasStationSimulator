#include "CommonVisibilityWidgetBase.h"

UCommonVisibilityWidgetBase::UCommonVisibilityWidgetBase() {
    this->bShowForGamepad = true;
    this->bShowForMouseAndKeyboard = true;
    this->bShowForTouch = true;
    this->VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenType = ESlateVisibility::Collapsed;
}

TArray<FName> UCommonVisibilityWidgetBase::GetRegisteredPlatforms() {
    return TArray<FName>();
}


