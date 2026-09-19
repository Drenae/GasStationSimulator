#include "GSS2GameMode.h"
#include "GSS2HUD.h"

AGSS2GameMode::AGSS2GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUDClass = AGSS2HUD::StaticClass();
    this->PathfindingManager = NULL;
    this->TimeToAutoSave = 600.00f;
    this->GGEM = NULL;
    this->DialogueManager = NULL;
    this->ActionManager = NULL;
    this->DLCAirstripManager = NULL;
    this->DLCJunkyardManager = NULL;
    this->DLCCinemaManager = NULL;
    this->DLCRVCampManager = NULL;
    this->DLCShadyDealsManager = NULL;
    this->GSSGameInstance = NULL;
}

void AGSS2GameMode::InitManagers() {
}

UDLCShadyDealsManager* AGSS2GameMode::GetShadyDealsDLCManager() const {
    return NULL;
}

AGlobalGameEventManager* AGSS2GameMode::GetGGEM() {
    return NULL;
}


ARVCampManager* AGSS2GameMode::GetDLCRVCampManager() {
    return NULL;
}

AJunkyardManager* AGSS2GameMode::GetDLCJunkyardManager() {
    return NULL;
}

ADLCDriveInCinemaManager* AGSS2GameMode::GetDLCCinemaManager() {
    return NULL;
}

ADLCAirstripManager* AGSS2GameMode::GetDLCAirstripManager() {
    return NULL;
}

ADialogueManager* AGSS2GameMode::GetDialogueManager() {
    return NULL;
}

AActionManager* AGSS2GameMode::GetActionManager() {
    return NULL;
}


