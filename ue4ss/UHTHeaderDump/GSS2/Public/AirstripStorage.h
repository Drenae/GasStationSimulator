#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "AirstripStorage.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAirstripStorage : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AAirstripStorage(const FObjectInitializer& ObjectInitializer);

};

