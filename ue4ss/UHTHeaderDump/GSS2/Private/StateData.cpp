#include "StateData.h"

FStateData::FStateData() {
    this->State = EState::TEXAS;
    this->UnlockLevel = 0;
    this->Difficulty = EContractDifficulty::EASY;
    this->StateLevel = 0;
}

