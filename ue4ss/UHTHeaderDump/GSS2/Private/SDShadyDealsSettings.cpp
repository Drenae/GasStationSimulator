#include "SDShadyDealsSettings.h"

USDShadyDealsSettings::USDShadyDealsSettings() {
    this->FightersNumber = 8;
    this->PauseBetweenFights = 20.00f;
    this->TrainingPhaseDuration = 20.00f;
    this->PauseBeforeFight = 140.00f;
    this->DirtyMoneyBagCapacity = 200.00f;
}

FText USDShadyDealsSettings::GetGangActivityName(ESDGangActivityType InGangActivity) const {
    return FText::GetEmpty();
}


