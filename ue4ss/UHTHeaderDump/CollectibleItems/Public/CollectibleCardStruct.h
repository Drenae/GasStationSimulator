#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardsValueStruct.h"
#include "CollectibleStruct.h"
#include "CollectibleCardStruct.generated.h"

USTRUCT(BlueprintType)
struct FCollectibleCardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleStruct CollectibleStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleCardsValueStruct CollectibleCardsValuesStruct;
    
    COLLECTIBLEITEMS_API FCollectibleCardStruct();
};

