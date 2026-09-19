#include "UnlockedState.h"

FUnlockedState::FUnlockedState() {
    this->State = EState::TEXAS;
    this->Difficulty = EContractDifficulty::EASY;
    this->StateLevel = 0;
    this->CompletedContractsNumber = 0;
    this->CompletedDeliveriesNumber = 0;
}

