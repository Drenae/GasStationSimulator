#include "KeyItemWidget.h"

UKeyItemWidget::UKeyItemWidget() {
    this->BindingsHorizontal = NULL;
    this->MainCanvas = NULL;
    this->MiniGames_Tutorial = NULL;
    this->Overlay_ConstructionSnap = NULL;
    this->MainKeyWidget = NULL;
    this->CurrentMode = 0;
}

void UKeyItemWidget::UpdateTutorialWidgetVisibility() {
}

void UKeyItemWidget::SetCurrentMode(const int32 InCurrentMode) {
}

void UKeyItemWidget::ResetBindings(bool bSetDefault) {
}


void UKeyItemWidget::OnKeybindingsReset() {
}

void UKeyItemWidget::OnKeybindingChange(const FName ActionName) {
}

void UKeyItemWidget::OnInteractCreateBindings(TSoftClassPtr<AActor> CurrentInteraction) {
}

FString UKeyItemWidget::GetKeyItemRowName() {
    return TEXT("");
}

void UKeyItemWidget::GetAndSetBindingData(const FString& KeyItemName) {
}

void UKeyItemWidget::CreateTutorial(const AActor* OwnerObject) {
}

void UKeyItemWidget::CreateBasicBindings() {
}



void UKeyItemWidget::ChangeBindings(const FString& KeyItemName) {
}


