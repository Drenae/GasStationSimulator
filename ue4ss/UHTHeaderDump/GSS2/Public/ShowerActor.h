#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "ShowerActor.generated.h"

UCLASS(Blueprintable)
class GSS2_API AShowerActor : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AShowerActor(const FObjectInitializer& ObjectInitializer);

};

