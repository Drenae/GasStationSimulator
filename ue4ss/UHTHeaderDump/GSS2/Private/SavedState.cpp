#include "SavedState.h"

FSavedState::FSavedState() {
    this->SavedState = EState::TEXAS;
    this->SavedDifficulty = EContractDifficulty::EASY;
    this->SavedStateLevel = 0;
    this->SavedCompletedContractsNumber = 0;
    this->SavedCompletedDeliveriesNumber = 0;
}

