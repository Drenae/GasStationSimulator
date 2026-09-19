#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "HouseDoor.generated.h"

UCLASS(Blueprintable)
class GSS2_API AHouseDoor : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AHouseDoor(const FObjectInitializer& ObjectInitializer);

};

