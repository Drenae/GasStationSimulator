#include "WrecksCollectionContract.h"
#include "EContractType.h"

UWrecksCollectionContract::UWrecksCollectionContract() {
    this->ContractType = EContractType::WRECKS_COLLECTION;
    this->CustomizableWreckChance = 0.00f;
    this->IsCheckingForStuckScheduled = false;
}

bool UWrecksCollectionContract::UnlockCarPartVisibility(EJunkyardCarPartType CarPartType) {
    return false;
}

void UWrecksCollectionContract::SetRewardCarName(FText InRewardCarName) {
}

void UWrecksCollectionContract::SetCustomizableWreckChance(float InCustomizableWreckChance) {
}

void UWrecksCollectionContract::SetCarWreckRewardSoftClass(TSoftClassPtr<AJunkyardCarWreck> InCarWreckReward) {
}

void UWrecksCollectionContract::SetCarPartRewards(TArray<FCarPartReward> InCarPartRewards) {
}

void UWrecksCollectionContract::ScheduleCheckingForStuck() {
}

bool UWrecksCollectionContract::RevealDeliveryCarPart(EJunkyardCarPartType CarPartType) {
    return false;
}

FText UWrecksCollectionContract::GetRewardCarName() {
    return FText::GetEmpty();
}

float UWrecksCollectionContract::GetCustomizableWreckChance() {
    return 0.0f;
}

TSoftClassPtr<AJunkyardCarWreck> UWrecksCollectionContract::GetCarWreckRewardSoftClass() {
    return NULL;
}

TArray<FCarPartReward> UWrecksCollectionContract::GetCarPartRewards() {
    return TArray<FCarPartReward>();
}

void UWrecksCollectionContract::CheckForContractStuck() {
}


