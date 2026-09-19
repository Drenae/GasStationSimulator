#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardStruct.h"
#include "CollectiblesSlotStruct.generated.h"

USTRUCT(BlueprintType)
struct COLLECTIBLEITEMS_API FCollectiblesSlotStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleCardStruct CollectibleCardStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAdded;
    
    FCollectiblesSlotStruct();
};

