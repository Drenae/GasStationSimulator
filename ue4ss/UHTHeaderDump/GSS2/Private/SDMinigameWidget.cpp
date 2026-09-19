#include "SDMinigameWidget.h"

USDMinigameWidget::USDMinigameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentMinigame = NULL;
}

void USDMinigameWidget::SetParentMinigame(ASDMinigameBase* InMinigame) {
}

void USDMinigameWidget::InitializeMinigameWidget_Implementation() {
}


