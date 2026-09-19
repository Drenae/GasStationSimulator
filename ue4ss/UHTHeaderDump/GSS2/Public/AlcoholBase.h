#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "AlcoholBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAlcoholBase : public AGasStationProduct {
    GENERATED_BODY()
public:
    AAlcoholBase(const FObjectInitializer& ObjectInitializer);

};

