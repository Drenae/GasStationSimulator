#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "TowysGarage.generated.h"

UCLASS(Blueprintable)
class GSS2_API ATowysGarage : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ATowysGarage(const FObjectInitializer& ObjectInitializer);

};

