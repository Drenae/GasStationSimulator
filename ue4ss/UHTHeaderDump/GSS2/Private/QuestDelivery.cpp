#include "QuestDelivery.h"

FQuestDelivery::FQuestDelivery() {
    this->ContractType = EContractType::WRECKS_COLLECTION;
    this->DeliveryState = EState::TEXAS;
    this->Tier = EJunkyardPartRarity::FAKE;
}

