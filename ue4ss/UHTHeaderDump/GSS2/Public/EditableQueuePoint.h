#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "EditableQueuePoint.generated.h"

UCLASS(Blueprintable)
class GSS2_API AEditableQueuePoint : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AEditableQueuePoint(const FObjectInitializer& ObjectInitializer);

};

