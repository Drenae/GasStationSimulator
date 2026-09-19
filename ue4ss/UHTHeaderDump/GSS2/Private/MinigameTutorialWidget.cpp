#include "MinigameTutorialWidget.h"

UMinigameTutorialWidget::UMinigameTutorialWidget() {
    this->bIsGamepad = false;
    this->HUD = NULL;
    this->bCanBeOpened = true;
    this->TutorialType = EGameActivityType::DIGGER;
    this->Tutorial_IMG = NULL;
    this->TutorialTitle_TXT = NULL;
    this->TutorialDescription_TXT = NULL;
    this->TutorialDescription_Reach = NULL;
    this->GameStateRef = NULL;
}


void UMinigameTutorialWidget::RemoveFromHUD() {
}

void UMinigameTutorialWidget::RefreshTutorialDescription() {
}

bool UMinigameTutorialWidget::IsTipButton(const FKeyEvent& InKeyEvent) {
    return false;
}


void UMinigameTutorialWidget::FillWidgets(FTutorialData TutorialData, bool bCreateTutorial) {
}

void UMinigameTutorialWidget::FillTutorialInfo(EGameActivityType _TutorialType, bool bCreateTutorial) {
}

void UMinigameTutorialWidget::CreateTutorialAndSetType(EGameActivityType _TutorialType) {
}



void UMinigameTutorialWidget::ChangeInputDevice(bool IsGamepad) {
}

void UMinigameTutorialWidget::AddToHUD() {
}


