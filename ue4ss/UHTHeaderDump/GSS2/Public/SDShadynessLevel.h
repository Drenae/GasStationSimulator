#pragma once
#include "CoreMinimal.h"
#include "SDShadynessLevel.generated.h"

USTRUCT(BlueprintType)
struct FSDShadynessLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPercent;
    
    GSS2_API FSDShadynessLevel();
};

