#pragma once
#include "CoreMinimal.h"
#include "EMapRquiredType.h"
#include "RequiredLevel.generated.h"

USTRUCT(BlueprintType)
struct FRequiredLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapRquiredType MapToSpawnOn;
    
    GSS2_API FRequiredLevel();
};

