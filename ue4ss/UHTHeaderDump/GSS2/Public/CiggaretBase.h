#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "CiggaretBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACiggaretBase : public AGasStationProduct {
    GENERATED_BODY()
public:
    ACiggaretBase(const FObjectInitializer& ObjectInitializer);

};

