#include "DlFmButton.h"

UDlFmButton::UDlFmButton() {
    this->GapTime = 0.10f;
    this->Style = NULL;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
}

void UDlFmButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UDlFmButton::SetStyle(const FButtonStyle& InStyle) {
}

void UDlFmButton::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UDlFmButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UDlFmButton::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UDlFmButton::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UDlFmButton::IsPressed() const {
    return false;
}


