#pragma once
#include "CoreMinimal.h"
#include "EconomyDayInfo.h"
#include "SavedPassiveIncome.h"
#include "SavedEconomyData.generated.h"

USTRUCT(BlueprintType)
struct FSavedEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEconomyDayInfo> SavedDailyEconomyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneySpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedPassiveIncome> SavedPassiveIncome;
    
    GSS2_API FSavedEconomyData();
};

