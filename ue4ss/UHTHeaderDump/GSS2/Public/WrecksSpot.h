#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "WrecksSpot.generated.h"

UCLASS(Blueprintable)
class GSS2_API AWrecksSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AWrecksSpot(const FObjectInitializer& ObjectInitializer);

};

