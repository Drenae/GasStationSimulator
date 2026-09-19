#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "SoftDrink.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASoftDrink : public AGasStationProduct {
    GENERATED_BODY()
public:
    ASoftDrink(const FObjectInitializer& ObjectInitializer);

};

