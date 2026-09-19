#include "JoeCharacter.h"

AJoeCharacter::AJoeCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JoeAirplane = NULL;
    this->JoeRepairingDialogInterval = 120.00f;
    this->FirstDialogDelay = 30.00f;
    this->MaxAllowedDistansFromJoeToPlayerToTriggerDialogs = 2000.00f;
}

void AJoeCharacter::PlayRandomJoeDialog(ENPCConversationType Dialogtype) {
}

void AJoeCharacter::OnJoePlaneStateChanged(EJoeAirplaneState NewPlaneState) {
}


bool AJoeCharacter::IsPlayerClose() {
    return false;
}


