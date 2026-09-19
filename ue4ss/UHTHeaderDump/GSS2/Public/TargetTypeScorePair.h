#pragma once
#include "CoreMinimal.h"
#include "EShootingRangeDifficulty.h"
#include "TargetTypeScorePair.generated.h"

USTRUCT(BlueprintType)
struct FTargetTypeScorePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShootingRangeDifficulty TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    GSS2_API FTargetTypeScorePair();
};

