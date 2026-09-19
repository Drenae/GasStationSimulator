#pragma once
#include "CoreMinimal.h"
#include "ProductShopStruct.h"
#include "DrawnProduct.generated.h"

USTRUCT(BlueprintType)
struct FDrawnProduct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductShopStruct ItemToPut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToPut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProductType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopularityToGet;
    
    GSS2_API FDrawnProduct();
};

