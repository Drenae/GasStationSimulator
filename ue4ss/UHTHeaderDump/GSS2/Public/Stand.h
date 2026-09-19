#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "Stand.generated.h"

UCLASS(Blueprintable)
class GSS2_API AStand : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AStand(const FObjectInitializer& ObjectInitializer);

};

