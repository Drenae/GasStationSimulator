#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "CarCare.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACarCare : public AGasStationProduct {
    GENERATED_BODY()
public:
    ACarCare(const FObjectInitializer& ObjectInitializer);

};

