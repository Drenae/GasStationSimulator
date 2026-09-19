#pragma once
#include "CoreMinimal.h"
#include "ProductShopStruct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FProductShopStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnLocked;
    
    FProductShopStruct();
};

