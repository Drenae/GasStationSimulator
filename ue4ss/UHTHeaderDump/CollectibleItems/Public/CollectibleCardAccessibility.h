#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardAccessibility.generated.h"

class ACollectibleCard;

USTRUCT(BlueprintType)
struct FCollectibleCardAccessibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACollectibleCard> CollectibleCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    COLLECTIBLEITEMS_API FCollectibleCardAccessibility();
};

