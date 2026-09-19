#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "JunkyardWorkshop.generated.h"

UCLASS(Blueprintable)
class GSS2_API AJunkyardWorkshop : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AJunkyardWorkshop(const FObjectInitializer& ObjectInitializer);

};

