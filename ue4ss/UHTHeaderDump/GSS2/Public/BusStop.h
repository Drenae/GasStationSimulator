#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "BusStop.generated.h"

UCLASS(Blueprintable)
class GSS2_API ABusStop : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ABusStop(const FObjectInitializer& ObjectInitializer);

};

