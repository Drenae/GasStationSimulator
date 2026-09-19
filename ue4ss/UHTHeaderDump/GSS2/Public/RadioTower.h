#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "RadioTower.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARadioTower : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ARadioTower(const FObjectInitializer& ObjectInitializer);

};

