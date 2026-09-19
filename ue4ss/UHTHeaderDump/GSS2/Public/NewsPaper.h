#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "NewsPaper.generated.h"

UCLASS(Blueprintable)
class GSS2_API ANewsPaper : public AGasStationProduct {
    GENERATED_BODY()
public:
    ANewsPaper(const FObjectInitializer& ObjectInitializer);

};

