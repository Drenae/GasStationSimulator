#include "DA_MainPCButton.h"

UDA_MainPCButton::UDA_MainPCButton() {
    this->bCreateAsNewWidget = false;
    this->bHideTitle = false;
    this->ButtonIcon = NULL;
    this->HoverIcon = NULL;
    this->DisabledIcon = NULL;
    this->bHasTutorial = false;
    this->bTutorialType = EGameActivityType::DIGGER;
    this->bSetFillHorizontal = false;
    this->bHasFirstTimeTutorial = false;
    this->bHideBackground = false;
    this->bHideBottomPanel = false;
}


