#pragma once
#include "CoreMinimal.h"
#include "RVConcertReward.generated.h"

USTRUCT(BlueprintType)
struct FRVConcertReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrustPointReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyMultiplier;
    
    GSS2_API FRVConcertReward();
};

