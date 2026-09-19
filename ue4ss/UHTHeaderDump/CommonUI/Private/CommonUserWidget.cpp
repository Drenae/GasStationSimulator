#include "CommonUserWidget.h"

UCommonUserWidget::UCommonUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bConsumePointerInput = false;
}

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput) {
}


