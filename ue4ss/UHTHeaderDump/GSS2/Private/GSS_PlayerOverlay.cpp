#include "GSS_PlayerOverlay.h"

UGSS_PlayerOverlay::UGSS_PlayerOverlay() {
    this->bCanShow = true;
    this->WBP_Crosshair = NULL;
    this->SharkHealthBarHolder = NULL;
    this->SharkNotificationHolder = NULL;
    this->TabWidget = NULL;
    this->Station_Closed_WBP = NULL;
    this->Employees_hud_WBP = NULL;
    this->DisplayItemInfo_Overlay = NULL;
    this->Debug_Print_LogTracedActor = true;
    this->OneTimePopupWidget = NULL;
    this->QuestAndChallengesHolder = NULL;
    this->PlayerController = NULL;
    this->PlayerCharacter = NULL;
    this->PointerWidgetRef = NULL;
    this->IsQuesHolderVisible = true;
}

void UGSS_PlayerOverlay::UpdateHandleActor(const AActor* Actor) {
}

void UGSS_PlayerOverlay::UnhideQuestAndChallenges() {
}




void UGSS_PlayerOverlay::ShowTabHolder(bool bEnable) {
}



void UGSS_PlayerOverlay::ShowHideCrossOnPossessed(const APawn* Character) {
}

void UGSS_PlayerOverlay::ShowCrosshair(bool bShow) {
}



void UGSS_PlayerOverlay::HideQuestAndChallenges() {
}

void UGSS_PlayerOverlay::GasSignOpenClose(bool bIsOpen) {
}



