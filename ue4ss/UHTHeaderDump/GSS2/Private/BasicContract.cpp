#include "BasicContract.h"

UBasicContract::UBasicContract() {
    this->OriginBonus = 10.00f;
    this->ContractTier = EJunkyardPartRarity::FAKE;
}

void UBasicContract::SetOriginBonus(float InOriginBonus) {
}

void UBasicContract::SetHiredDriver(FHireableDriver InHiredDriver) {
}

void UBasicContract::SetContractTier(EJunkyardPartRarity InContractTier) {
}

float UBasicContract::GetOriginBonus() {
    return 0.0f;
}

FHireableDriver UBasicContract::GetHiredDriver() {
    return FHireableDriver{};
}

EJunkyardPartRarity UBasicContract::GetContractTier() {
    return EJunkyardPartRarity::FAKE;
}

bool UBasicContract::CheckIfEnoughSpaceForReward() {
    return false;
}

void UBasicContract::AddRewards() {
}


