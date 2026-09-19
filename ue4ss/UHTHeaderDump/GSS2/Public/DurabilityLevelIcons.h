#pragma once
#include "CoreMinimal.h"
#include "DurabilityLevelIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GSS2_API FDurabilityLevelIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DurabilityStateIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurabilityValue;
    
    FDurabilityLevelIcons();
};

