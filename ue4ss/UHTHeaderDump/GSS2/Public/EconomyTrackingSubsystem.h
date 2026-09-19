#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "BasketItemStruct.h"
#include "DetailedEconomyDayInfo.h"
#include "DetailedItemInfo.h"
#include "DetailedTypeInfo.h"
#include "EEconomyDetailedYieldType.h"
#include "EEconomyGeneralYieldType.h"
#include "EItemTypeCategory.h"
#include "EconomyDayInfo.h"
#include "SavedPassiveIncome.h"
#include "EconomyTrackingSubsystem.generated.h"

class UEconomyChartButton;

UCLASS(Blueprintable)
class GSS2_API UEconomyTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneySpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedPassiveIncome> PassiveIncomeFromOtherMaps;
    
public:
    UEconomyTrackingSubsystem();

    UFUNCTION(BlueprintCallable)
    TArray<UEconomyChartButton*> SortChartButtonWidgets(TArray<UEconomyChartButton*> InputData, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalMoneySpent(float NewTotalMoneySpent);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalMoneyEarned(float NewTotalMoneyEarned);
    
    UFUNCTION(BlueprintCallable)
    void SetPassiveIncomeData(TArray<FSavedPassiveIncome> NewPassiveIncome);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FEconomyDayInfo> SaveEconomyData();
    
    UFUNCTION(BlueprintCallable)
    void RecievePassiveIncome();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDetailedItemInfo> OrderItemInfo(TArray<FDetailedItemInfo> InputArray);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    float GetTotalYieldOfSelectedDays(TArray<int32> SelectedDays, EEconomyGeneralYieldType YieldType);
    
    UFUNCTION(BlueprintCallable)
    float GetTotalMoneySpent();
    
    UFUNCTION(BlueprintCallable)
    float GetTotalMoneyEarned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPassiveIncomeTotalFromSelectedDays(TArray<int32> Days);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSavedPassiveIncome> GetPassiveIncomeData();
    
    UFUNCTION(BlueprintCallable)
    TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo> GetGeneralEconomyData(TArray<int32> Days, EEconomyGeneralYieldType GeneralYieldType, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    TMap<EItemTypeCategory, FDetailedTypeInfo> GetDetailedEconomyData(TArray<int32> Days, EEconomyGeneralYieldType GeneralYieldType, EEconomyDetailedYieldType DetailedYieldType, bool bAscending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FEconomyDayInfo> GetDailyEconomyInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void AddNewDailyEconomyInfoOrder(TArray<FBasketItemStruct> OrderedItems);
    
    UFUNCTION(BlueprintCallable)
    void AddNewDailyEconomyInfoOneOrder(FBasketItemStruct OrderedItem);
    
    UFUNCTION(BlueprintCallable)
    void AddNewDailyEconomyInfo(float Value, float Amount, EEconomyDetailedYieldType YieldType, EItemTypeCategory TypeCategory, FText ItemName, FName DataTableItemName, EEconomyGeneralYieldType ForcedYieldType, bool bAddToGroupedInfoOnly);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToEconomySubsystem(const FString& ItemName, float Price, float Amount, bool AddToGroupedInfo);
    
};

