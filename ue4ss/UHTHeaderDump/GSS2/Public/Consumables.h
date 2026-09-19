#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "Consumables.generated.h"

UCLASS(Blueprintable)
class GSS2_API AConsumables : public AGasStationProduct {
    GENERATED_BODY()
public:
    AConsumables(const FObjectInitializer& ObjectInitializer);

};

