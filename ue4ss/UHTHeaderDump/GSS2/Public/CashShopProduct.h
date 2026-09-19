#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CashShopProduct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FCashShopProduct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ProductClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemsScannedSuccessfully;
    
    GSS2_API FCashShopProduct();
};

