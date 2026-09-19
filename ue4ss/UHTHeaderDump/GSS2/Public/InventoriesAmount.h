#pragma once
#include "CoreMinimal.h"
#include "InventoriesAmount.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FInventoriesAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainInventoryAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirportInventoryAmount;
    
    FInventoriesAmount();
};

