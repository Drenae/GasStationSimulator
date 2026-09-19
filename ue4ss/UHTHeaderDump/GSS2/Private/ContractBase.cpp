#include "ContractBase.h"

UContractBase::UContractBase() {
    this->State = EState::MAX;
    this->ContractType = EContractType::MAX;
    this->Difficulty = 1;
    this->CurrentProgressState = EProgressState::AVAILABLE;
    this->bSuccess = false;
    this->MoneyReward = 0.00f;
    this->ContractPointsReward = 0.00f;
    this->MapPositionIndex = -1;
}

void UContractBase::UpdateContract(FTimeStruct InTime) {
}

bool UContractBase::StartContract() {
    return false;
}

void UContractBase::SetTimeLeft(FTimeStruct InTimeLeft) {
}

void UContractBase::SetState(EState InState) {
}

void UContractBase::SetMoneyReward(float InMoneyReward) {
}

void UContractBase::SetIsSuccess(bool InIsSuccess) {
}

void UContractBase::SetInitialTime(FTimeStruct InInitialTime) {
}

void UContractBase::SetDifficulty(int32 InDifficulty) {
}

void UContractBase::SetCurrentProgressState(EProgressState InCurrentProgressState) {
}

void UContractBase::SetContractType(EContractType InContractType) {
}

void UContractBase::SetContractPointsReward(float InContractPointsReward) {
}

void UContractBase::OnGameLoaded(bool bGameLoaded) {
}

void UContractBase::Initialization(EState InState, int32 InDifficulty, EProgressState InProgressState) {
}

void UContractBase::HandleAfterLoading() {
}

FTimeStruct UContractBase::GetTimeLeft() {
    return FTimeStruct{};
}

EState UContractBase::GetState() {
    return EState::TEXAS;
}

float UContractBase::GetMoneyReward() {
    return 0.0f;
}

bool UContractBase::GetIsSuccess() {
    return false;
}

FTimeStruct UContractBase::GetInitialTime() {
    return FTimeStruct{};
}

EContractDifficulty UContractBase::GetDifficultyEnum() {
    return EContractDifficulty::EASY;
}

int32 UContractBase::GetDifficulty() {
    return 0;
}

int32 UContractBase::GetDefinedPosition() {
    return 0;
}

EProgressState UContractBase::GetCurrentProgressState() {
    return EProgressState::AVAILABLE;
}

EContractType UContractBase::GetContractType() {
    return EContractType::WRECKS_COLLECTION;
}

float UContractBase::GetContractPointsReward() {
    return 0.0f;
}

void UContractBase::FinishContract() {
}

void UContractBase::DefinePosition(int32 InIndex) {
}

bool UContractBase::CheckIfSuccess() {
    return false;
}

void UContractBase::CancelContract() {
}

bool UContractBase::CanBeStarted() {
    return false;
}


