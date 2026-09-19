#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "Glasses.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGlasses : public AGasStationProduct {
    GENERATED_BODY()
public:
    AGlasses(const FObjectInitializer& ObjectInitializer);

};

