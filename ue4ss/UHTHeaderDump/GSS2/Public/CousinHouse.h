#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "CousinHouse.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACousinHouse : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ACousinHouse(const FObjectInitializer& ObjectInitializer);

};

