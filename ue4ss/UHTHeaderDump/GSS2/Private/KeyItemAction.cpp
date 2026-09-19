#include "KeyItemAction.h"

FKeyItemAction::FKeyItemAction() {
    this->Prefix = EInteractionPrefix::CLICK;
    this->UniqueRowIndex = 0;
    this->CurrentMode = 0;
    this->PadIcon = NULL;
}

