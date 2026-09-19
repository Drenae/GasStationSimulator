#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "Pastries.generated.h"

UCLASS(Blueprintable)
class GSS2_API APastries : public AGasStationProduct {
    GENERATED_BODY()
public:
    APastries(const FObjectInitializer& ObjectInitializer);

};

