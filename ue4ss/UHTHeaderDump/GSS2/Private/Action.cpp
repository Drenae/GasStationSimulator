#include "Action.h"

FAction::FAction() {
    this->Prefix = EInteractionPrefix::CLICK;
    this->Sofix = EInteractionSofix::PLACE;
    this->Button = EInteractionButton::TAB;
    this->UniqueRowIndex = 0;
    this->Icon = NULL;
    this->Mode = 0;
    this->QuestStateType = EQuestStateType::none;
    this->IgnorePlayerHandleItem = false;
    this->bShowActionProgressBar = false;
}

