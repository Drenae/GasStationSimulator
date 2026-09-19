#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "PartyBusStop.generated.h"

UCLASS(Blueprintable)
class GSS2_API APartyBusStop : public AInteractableBuilding {
    GENERATED_BODY()
public:
    APartyBusStop(const FObjectInitializer& ObjectInitializer);

};

