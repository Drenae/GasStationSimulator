#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "DecorationBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ADecorationBase : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ADecorationBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateClockCooKoo();
    
};

