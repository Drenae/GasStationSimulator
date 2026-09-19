#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "JunkyardBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API AJunkyardBase : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AJunkyardBase(const FObjectInitializer& ObjectInitializer);

};

