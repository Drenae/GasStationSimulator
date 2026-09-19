#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "ParkingSpot.generated.h"

UCLASS(Blueprintable)
class GSS2_API AParkingSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AParkingSpot(const FObjectInitializer& ObjectInitializer);

};

