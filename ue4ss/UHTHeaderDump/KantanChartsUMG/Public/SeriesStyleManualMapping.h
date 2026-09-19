#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=KantanSeriesStyle -FallbackName=KantanSeriesStyle
#include "SeriesStyleManualMapping.generated.h"

USTRUCT(BlueprintType)
struct FSeriesStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeriesId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanSeriesStyle Style;
    
    KANTANCHARTSUMG_API FSeriesStyleManualMapping();
};

