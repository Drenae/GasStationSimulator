#pragma once
#include "CoreMinimal.h"
#include "LevelDecrease.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FLevelDecrease {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtLevelRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConcentrationDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotsAmount;
    
    FLevelDecrease();
};

