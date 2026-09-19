#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "SD_BarPlace.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASD_BarPlace : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ASD_BarPlace(const FObjectInitializer& ObjectInitializer);

};

