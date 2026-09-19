#include "QuestInfoWidget.h"

UQuestInfoWidget::UQuestInfoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentQuest = NULL;
    this->CurrentObjective = NULL;
    this->ProgressHorizontalBox = NULL;
    this->CurrentProgressText = NULL;
    this->DescriptionText = NULL;
    this->DescriptionTextRich = NULL;
    this->ObjectiveProgressBar = NULL;
    this->PlusOneAnimation = NULL;
}

void UQuestInfoWidget::SetQuestInfo(UQuestBase* _CurrentQuest) {
}

void UQuestInfoWidget::RefreshQuestInfo() {
}

void UQuestInfoWidget::OnCountableObjectiveProgressUpdated(UCountableObjectiveBase* CountableObjective, int32 CurrentValue, bool bShowAnim) {
}

void UQuestInfoWidget::InitializeWidget(UQuestBase* _CurrentQuest) {
}


