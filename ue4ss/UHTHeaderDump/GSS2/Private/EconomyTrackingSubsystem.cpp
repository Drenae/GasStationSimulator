#include "EconomyTrackingSubsystem.h"

UEconomyTrackingSubsystem::UEconomyTrackingSubsystem() {
    this->TotalMoneyEarned = 0.00f;
    this->TotalMoneySpent = 0.00f;
}

TArray<UEconomyChartButton*> UEconomyTrackingSubsystem::SortChartButtonWidgets(TArray<UEconomyChartButton*> InputData, bool bAscending) {
    return TArray<UEconomyChartButton*>();
}

void UEconomyTrackingSubsystem::SetTotalMoneySpent(float NewTotalMoneySpent) {
}

void UEconomyTrackingSubsystem::SetTotalMoneyEarned(float NewTotalMoneyEarned) {
}

void UEconomyTrackingSubsystem::SetPassiveIncomeData(TArray<FSavedPassiveIncome> NewPassiveIncome) {
}

TMap<FString, FEconomyDayInfo> UEconomyTrackingSubsystem::SaveEconomyData() {
    return TMap<FString, FEconomyDayInfo>();
}

void UEconomyTrackingSubsystem::RecievePassiveIncome() {
}

TArray<FDetailedItemInfo> UEconomyTrackingSubsystem::OrderItemInfo(TArray<FDetailedItemInfo> InputArray) {
    return TArray<FDetailedItemInfo>();
}

void UEconomyTrackingSubsystem::OnWorldBeginPlay() {
}

float UEconomyTrackingSubsystem::GetTotalYieldOfSelectedDays(TArray<int32> SelectedDays, EEconomyGeneralYieldType YieldType) {
    return 0.0f;
}

float UEconomyTrackingSubsystem::GetTotalMoneySpent() {
    return 0.0f;
}

float UEconomyTrackingSubsystem::GetTotalMoneyEarned() {
    return 0.0f;
}

int32 UEconomyTrackingSubsystem::GetPassiveIncomeTotalFromSelectedDays(TArray<int32> Days) {
    return 0;
}

TArray<FSavedPassiveIncome> UEconomyTrackingSubsystem::GetPassiveIncomeData() {
    return TArray<FSavedPassiveIncome>();
}

TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo> UEconomyTrackingSubsystem::GetGeneralEconomyData(TArray<int32> Days, EEconomyGeneralYieldType GeneralYieldType, bool bAscending) {
    return TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo>();
}

TMap<EItemTypeCategory, FDetailedTypeInfo> UEconomyTrackingSubsystem::GetDetailedEconomyData(TArray<int32> Days, EEconomyGeneralYieldType GeneralYieldType, EEconomyDetailedYieldType DetailedYieldType, bool bAscending) {
    return TMap<EItemTypeCategory, FDetailedTypeInfo>();
}

TMap<FString, FEconomyDayInfo> UEconomyTrackingSubsystem::GetDailyEconomyInfo() const {
    return TMap<FString, FEconomyDayInfo>();
}

void UEconomyTrackingSubsystem::AddNewDailyEconomyInfoOrder(TArray<FBasketItemStruct> OrderedItems) {
}

void UEconomyTrackingSubsystem::AddNewDailyEconomyInfoOneOrder(FBasketItemStruct OrderedItem) {
}

void UEconomyTrackingSubsystem::AddNewDailyEconomyInfo(float Value, float Amount, EEconomyDetailedYieldType YieldType, EItemTypeCategory TypeCategory, FText ItemName, FName DataTableItemName, EEconomyGeneralYieldType ForcedYieldType, bool bAddToGroupedInfoOnly) {
}

void UEconomyTrackingSubsystem::AddItemToEconomySubsystem(const FString& ItemName, float Price, float Amount, bool AddToGroupedInfo) {
}


