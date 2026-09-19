#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "Toy.generated.h"

UCLASS(Blueprintable)
class GSS2_API AToy : public AGasStationProduct {
    GENERATED_BODY()
public:
    AToy(const FObjectInitializer& ObjectInitializer);

};

