#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "Cap.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACap : public AGasStationProduct {
    GENERATED_BODY()
public:
    ACap(const FObjectInitializer& ObjectInitializer);

};

