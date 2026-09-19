#include "QuestTipWidget.h"

UQuestTipWidget::UQuestTipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TipDescriptionText = NULL;
    this->TipDescriptionRich = NULL;
    this->GameStateRef = NULL;
    this->TipQuest = NULL;
}

void UQuestTipWidget::SetTipInfo(UQuestBase* NewTipQuest) {
}

void UQuestTipWidget::RefreshTipInfo() {
}


