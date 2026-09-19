#pragma once
#include "CoreMinimal.h"
#include "RequiredItems.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FRequiredItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    GSS2_API FRequiredItems();
};

