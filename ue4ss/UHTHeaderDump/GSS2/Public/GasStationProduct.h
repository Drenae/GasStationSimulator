#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "GasStationProduct.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGasStationProduct : public AProduct {
    GENERATED_BODY()
public:
    AGasStationProduct(const FObjectInitializer& ObjectInitializer);

};

