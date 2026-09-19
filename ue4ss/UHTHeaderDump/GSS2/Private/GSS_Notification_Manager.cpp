#include "GSS_Notification_Manager.h"

UGSS_Notification_Manager::UGSS_Notification_Manager() {
    this->Side_Notification_BOX = NULL;
}

void UGSS_Notification_Manager::RemoveOrCreateNotification(const bool bShow, const ENotificationType NotificationType, const ESpecialCharacterType CharacterType) {
}

void UGSS_Notification_Manager::RemoveNotification(USideNotification* Notification) {
}

void UGSS_Notification_Manager::OnFuelStatusChanged(EFuelState FuelState) {
}


void UGSS_Notification_Manager::CreateNotification_Implementation(const bool bShow, const ENotificationType NotificationType, const ESpecialCharacterType CharacterType) {
}

USideNotification* UGSS_Notification_Manager::CheckAndGetNotification(const ENotificationType NotificationType, const ESpecialCharacterType SpecialCharacterType) {
    return NULL;
}


