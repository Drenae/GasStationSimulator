#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "RentalSlot.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARentalSlot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ARentalSlot(const FObjectInitializer& ObjectInitializer);

};

