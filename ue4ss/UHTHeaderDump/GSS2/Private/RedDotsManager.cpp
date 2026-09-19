#include "RedDotsManager.h"

URedDotsManager::URedDotsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HudRef = NULL;
}

void URedDotsManager::SetGSSHudRef(AGSS_NewHud* InHudRef) {
}

AGSS_NewHud* URedDotsManager::GetGSSHUD() {
    return NULL;
}

void URedDotsManager::CreateRedDots(UGSSBaseWidget* Widget) {
}


