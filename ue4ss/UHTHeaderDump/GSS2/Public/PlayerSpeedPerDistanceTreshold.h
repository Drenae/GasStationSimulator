#pragma once
#include "CoreMinimal.h"
#include "PlayerSpeedPerDistanceTreshold.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpeedPerDistanceTreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    GSS2_API FPlayerSpeedPerDistanceTreshold();
};

