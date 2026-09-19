#pragma once
#include "CoreMinimal.h"
#include "BasketBasicInfo.h"
#include "CarWreckTypeInfo.h"
#include "CarWrecksBasket.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarWrecksBasket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasketBasicInfo BasketBasicInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckTypeInfo> CarWrecksBaskets;
    
    FCarWrecksBasket();
};

