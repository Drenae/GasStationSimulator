#pragma once
#include "CoreMinimal.h"
#include "InventoriesAmount.h"
#include "Templates/SubclassOf.h"
#include "ItemsToRestock.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FItemsToRestock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> Product;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoriesAmount InventoryAmount;
    
    FItemsToRestock();
};

