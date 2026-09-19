#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AirportSlotStruct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FAirportSlotStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityItem;
    
    FAirportSlotStruct();
};

