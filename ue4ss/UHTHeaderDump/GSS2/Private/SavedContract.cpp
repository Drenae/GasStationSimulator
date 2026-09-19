#include "SavedContract.h"

FSavedContract::FSavedContract() {
    this->SavedState = EState::TEXAS;
    this->SavedContractType = EContractType::WRECKS_COLLECTION;
    this->SavedDifficulty = 0;
    this->SavedCurrentProgressState = EProgressState::AVAILABLE;
    this->SavedSuccess = false;
    this->SavedMoneyReward = 0.00f;
    this->SavedContractPointsRewardf = 0;
}

