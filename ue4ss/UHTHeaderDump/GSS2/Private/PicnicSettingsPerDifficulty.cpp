#include "PicnicSettingsPerDifficulty.h"

FPicnicSettingsPerDifficulty::FPicnicSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->AmountOfProductsInBasketRequired = 0;
    this->bCanShowProductListInGame = false;
    this->TimeToComplete = 0.00f;
    this->bLoseMinigameWhenTimeEnds = false;
    this->TimeInSecondsToShowProductsList = 0.00f;
    this->CooldownReduction = 0.00f;
}

