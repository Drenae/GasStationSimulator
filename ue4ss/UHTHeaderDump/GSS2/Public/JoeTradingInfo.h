#pragma once
#include "CoreMinimal.h"
#include "JoeTradingInfo.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FJoeTradingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> RequiredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
    GSS2_API FJoeTradingInfo();
};

