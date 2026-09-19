#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "Shower.generated.h"

UCLASS(Blueprintable)
class GSS2_API AShower : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AShower(const FObjectInitializer& ObjectInitializer);

};

