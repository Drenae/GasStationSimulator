#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "VIPDestinationPoints.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FVIPDestinationPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName DestinationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VIPPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBonusActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemaningBonusTime;
    
    FVIPDestinationPoints();
};

