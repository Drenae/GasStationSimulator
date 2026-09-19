#include "SideNotification.h"

USideNotification::USideNotification() {
    this->NotificationType = ENotificationType::CarWash;
    this->SpecialCharacterType = ESpecialCharacterType::DEFAULT;
    this->NotificationAmount = NULL;
    this->bShowAmount = false;
    this->Amount = 1;
}

int32 USideNotification::UpdateNotification(int32 InAmount, bool Condition) {
    return 0;
}



