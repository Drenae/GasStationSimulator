#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "IceCream.generated.h"

UCLASS(Blueprintable)
class GSS2_API AIceCream : public AGasStationProduct {
    GENERATED_BODY()
public:
    AIceCream(const FObjectInitializer& ObjectInitializer);

};

