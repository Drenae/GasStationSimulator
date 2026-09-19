#pragma once
#include "CoreMinimal.h"
#include "SavedTradeCenter.generated.h"

USTRUCT(BlueprintType)
struct FSavedTradeCenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TradeCenterLevel;
    
    GSS2_API FSavedTradeCenter();
};

