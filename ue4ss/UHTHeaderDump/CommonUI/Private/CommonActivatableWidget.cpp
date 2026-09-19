#include "CommonActivatableWidget.h"

UCommonActivatableWidget::UCommonActivatableWidget() {
    this->bAutoActivate = false;
    this->bIsBackHandler = false;
    this->bSupportsActivationFocus = true;
    this->bIsModal = false;
    this->bAutoRestoreFocus = false;
    this->bSetVisibilityOnActivated = false;
    this->ActivatedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->bSetVisibilityOnDeactivated = false;
    this->DeactivatedVisibility = ESlateVisibility::Collapsed;
    this->bIsActive = false;
}

bool UCommonActivatableWidget::IsActivated() const {
    return false;
}

void UCommonActivatableWidget::DeactivateWidget() {
}





void UCommonActivatableWidget::ActivateWidget() {
}


