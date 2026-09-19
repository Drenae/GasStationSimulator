#pragma once
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Computer.generated.h"

UCLASS(Blueprintable)
class GSS2_API AComputer : public AInteractableActor {
    GENERATED_BODY()
public:
    AComputer(const FObjectInitializer& ObjectInitializer);

};

