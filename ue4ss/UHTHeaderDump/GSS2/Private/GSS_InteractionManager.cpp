#include "GSS_InteractionManager.h"

UGSS_InteractionManager::UGSS_InteractionManager() {
    this->InteractionDataTable = NULL;
    this->InteractionIcons = NULL;
    this->Interaction_Info_1 = NULL;
    this->Interaction_Info_2 = NULL;
    this->Interaction_Info_3 = NULL;
    this->ObjectiveMarkerClass = NULL;
    this->Player = NULL;
    this->PlayerController = NULL;
    this->HUD = NULL;
    this->CurrentMode = 0;
}

void UGSS_InteractionManager::UpdateInteractionInfoWidget(UInteractionInfoWidget* WidgetToUpdate, const FAction& DataToUpdate) {
}

void UGSS_InteractionManager::ToggleInteractions(int32 InteractionCountToToggle, bool bToggle) {
}

void UGSS_InteractionManager::SetCurrentMode(int32 InMode) {
}

void UGSS_InteractionManager::OnHandleActorUpdated(const AActor* Actor) {
}

void UGSS_InteractionManager::HoldedInteractionStart(float TimeToHold) {
}

void UGSS_InteractionManager::HoldedInteractionEnd(bool bHoldedInteractionSuccess) {
}


