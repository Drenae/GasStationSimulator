#pragma once
#include "CoreMinimal.h"
#include "DetailedEconomyDayInfo.h"
#include "EEconomyDetailedYieldType.h"
#include "EEconomyGeneralYieldType.h"
#include "EconomyDayInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FEconomyDayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEconomyGeneralYieldType YieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo> DailyOperations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalValue;
    
    FEconomyDayInfo();
};

