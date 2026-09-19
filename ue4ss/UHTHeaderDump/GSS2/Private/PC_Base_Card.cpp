#include "PC_Base_Card.h"

UPC_Base_Card::UPC_Base_Card() {
    this->Image = NULL;
    this->LockedImage = NULL;
    this->background = NULL;
    this->bExitMenuOnClicked = false;
    this->bPlayFadeOut = false;
    this->bHasTutorial = false;
    this->bSetCenterAlignment = false;
    this->bTutorialType = EGameActivityType::DIGGER;
    this->bHasFirstTimeTutorial = false;
}


