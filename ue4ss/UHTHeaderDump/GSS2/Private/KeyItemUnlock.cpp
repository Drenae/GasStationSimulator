#include "KeyItemUnlock.h"

FKeyItemUnlock::FKeyItemUnlock() {
    this->RequiredDlc = EDLCName::NONE;
    this->bUseInteractableBuilding = false;
    this->LevelRequriedToUnlock = 0;
    this->RequiredMoney = 0.00f;
    this->MailToSend = NULL;
}

