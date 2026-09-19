#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "AirplaneItem.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAirplaneItem : public AGasStationProduct {
    GENERATED_BODY()
public:
    AAirplaneItem(const FObjectInitializer& ObjectInitializer);

};

