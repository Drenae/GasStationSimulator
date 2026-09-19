#include "GSSPlayerState.h"
#include "InventoryComponent.h"

AGSSPlayerState::AGSSPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->LastLoanVolcanoAngerIncrease = 0;
    this->ContractPoints = 0.00f;
}

bool AGSSPlayerState::SubtractMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType) {
    return false;
}


void AGSSPlayerState::PayLoan(float HowMuchDoYouWantToPay, float& HowMuchYouPaid) {
}

bool AGSSPlayerState::HasEnoughMoney(float money) {
    return false;
}

bool AGSSPlayerState::HasEnoughContractPoints(float inPoints) {
    return false;
}

float AGSSPlayerState::GetMoney() const {
    return 0.0f;
}

float AGSSPlayerState::GetCredits() const {
    return 0.0f;
}

float AGSSPlayerState::GetContractPoints() {
    return 0.0f;
}

void AGSSPlayerState::AddMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType, EEconomyGeneralYieldType ForcedYieldType) {
}

void AGSSPlayerState::AddCredits(float Credits) {
}

void AGSSPlayerState::AddContractPoints(float inPoints) {
}


