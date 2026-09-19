#include "PCSelectableCard.h"

FPCSelectableCard::FPCSelectableCard() {
    this->Image = NULL;
    this->LockedImage = NULL;
    this->background = NULL;
    this->bExitMenuOnClicked = false;
    this->bHideCount = false;
    this->bSetCenterAlignment = false;
    this->bPlayFadeOut = false;
    this->DLCToCheck = EDLCName::NONE;
    this->bHasTutorial = false;
    this->bTutorialType = EGameActivityType::DIGGER;
    this->bHasFirstTimeTutorial = false;
    this->BuildingType = EBuildingType::MAIN_STATION;
    this->RequiredLevel = 0;
}

