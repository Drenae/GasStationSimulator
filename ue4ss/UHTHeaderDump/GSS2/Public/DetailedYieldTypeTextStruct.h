#pragma once
#include "CoreMinimal.h"
#include "EEconomyDetailedYieldType.h"
#include "DetailedYieldTypeTextStruct.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDetailedYieldTypeTextStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEconomyDetailedYieldType DetailedYieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FDetailedYieldTypeTextStruct();
};

