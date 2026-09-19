#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "Toilet.generated.h"

UCLASS(Blueprintable)
class GSS2_API AToilet : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AToilet(const FObjectInitializer& ObjectInitializer);

};

