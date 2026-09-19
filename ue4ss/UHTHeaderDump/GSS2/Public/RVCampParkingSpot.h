#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "RVCampParkingSpot.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARVCampParkingSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ARVCampParkingSpot(const FObjectInitializer& ObjectInitializer);

};

