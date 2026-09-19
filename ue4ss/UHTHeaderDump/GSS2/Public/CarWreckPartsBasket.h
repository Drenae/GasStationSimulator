#pragma once
#include "CoreMinimal.h"
#include "BasketBasicInfo.h"
#include "CarPartTypeModels.h"
#include "CarWreckPartsBasket.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarWreckPartsBasket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasketBasicInfo BasketBasicInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarPartTypeModels> CarWrecksPartsBaskets;
    
    FCarWreckPartsBasket();
};

