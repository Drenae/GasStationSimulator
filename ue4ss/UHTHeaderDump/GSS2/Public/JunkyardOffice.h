#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "JunkyardOffice.generated.h"

UCLASS(Blueprintable)
class GSS2_API AJunkyardOffice : public AInteractableBuilding {
    GENERATED_BODY()
public:
    AJunkyardOffice(const FObjectInitializer& ObjectInitializer);

};

