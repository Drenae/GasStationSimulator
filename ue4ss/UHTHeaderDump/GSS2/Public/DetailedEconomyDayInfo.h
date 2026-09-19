#pragma once
#include "CoreMinimal.h"
#include "DetailedTypeInfo.h"
#include "EEconomyDetailedYieldType.h"
#include "EEconomyGeneralYieldType.h"
#include "EItemTypeCategory.h"
#include "DetailedEconomyDayInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDetailedEconomyDayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEconomyGeneralYieldType YieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEconomyDetailedYieldType DetailedYieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemTypeCategory, FDetailedTypeInfo> TypesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetailedTypeInfo> GrouppedTypeInfos;
    
    FDetailedEconomyDayInfo();
};

