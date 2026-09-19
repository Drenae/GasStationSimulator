#pragma once
#include "CoreMinimal.h"
#include "EFuelMagazine.h"
#include "FuelSellPriceData.generated.h"

USTRUCT(BlueprintType)
struct FFuelSellPriceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelMagazine FuelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelSellPrice;
    
    GSS2_API FFuelSellPriceData();
};

