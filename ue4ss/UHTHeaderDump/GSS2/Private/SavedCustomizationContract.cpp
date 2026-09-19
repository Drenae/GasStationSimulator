#include "SavedCustomizationContract.h"

FSavedCustomizationContract::FSavedCustomizationContract() {
    this->SavedCustomizationContractType = ECustomizationContractType::REGULAR;
    this->SavedRequiredCarWreckType = EJunkyardCarWreckType::CAR1;
    this->SavedRequiredCarWreckTier = EJunkyardPartRarity::FAKE;
    this->SavedCarTier = EJunkyardPartRarity::FAKE;
    this->SavedRequiredDecalsNumber = 0;
    this->SavedRequiredDecalsCategory = EDecalUnlockType::All;
    this->SavedMoneyRewardBonus = 0.00f;
    this->SavedContractPointsReward = 0.00f;
    this->SavedArrayIndex = 0;
}

