#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "FoodBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API AFoodBase : public AGasStationProduct {
    GENERATED_BODY()
public:
    AFoodBase(const FObjectInitializer& ObjectInitializer);

};

