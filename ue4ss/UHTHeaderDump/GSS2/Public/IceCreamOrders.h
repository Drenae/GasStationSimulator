#pragma once
#include "CoreMinimal.h"
#include "EIceCreamConeSize.h"
#include "EIceCreamFlavours.h"
#include "IceCreamOrders.generated.h"

USTRUCT(BlueprintType)
struct FIceCreamOrders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamConeSize ConeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIceCreamFlavours> Flavours;
    
    GSS2_API FIceCreamOrders();
};

