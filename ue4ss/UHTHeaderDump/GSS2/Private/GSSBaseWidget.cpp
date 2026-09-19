#include "GSSBaseWidget.h"

UGSSBaseWidget::UGSSBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bImmediatelyDestroy = false;
    this->AlertWidget = NULL;
}

void UGSSBaseWidget::ShowMessageOnScreen_Implementation(const FText& ToShow, const float& Duration) {
}

void UGSSBaseWidget::ShowMessageOnScreen_Implementation(const FText& ToShow, const float& Duration) {
}

FEventReply UGSSBaseWidget::ShouldPreviewNavigationHandleKey(const FKeyEvent& InKeyEvent, UObject* WorldContextObject) {
    return FEventReply{};
}

FEventReply UGSSBaseWidget::ShouldNavigationHandleKey(const FKeyEvent& InKeyEvent, UObject* WorldContextObject) {
    return FEventReply{};
}

void UGSSBaseWidget::PlayUiSound(FName SoundName) {
}


UGlobalEventSubsystem* UGSSBaseWidget::GetGlobalEventSubsystem() {
    return NULL;
}


EUnlockableUIState UGSSBaseWidget::CheckState(FGameplayTag InTag) {
    return EUnlockableUIState::HIDDED;
}


