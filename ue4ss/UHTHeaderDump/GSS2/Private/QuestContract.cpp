#include "QuestContract.h"

FQuestContract::FQuestContract() {
    this->ContractType = EContractType::WRECKS_COLLECTION;
    this->CustomizationContractType = ECustomizationContractType::REGULAR;
    this->ContractState = EState::TEXAS;
}

