#pragma once
#include "CoreMinimal.h"
#include "CleanRange.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCleanRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HouseDecalsTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToiletDecalsTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowerDecalsTolerance;
    
    FCleanRange();
};

