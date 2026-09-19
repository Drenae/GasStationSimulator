#pragma once
#include "CoreMinimal.h"
#include "RVResourceState.generated.h"

USTRUCT(BlueprintType)
struct FRVResourceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesToRegenerate;
    
    GSS2_API FRVResourceState();
};

