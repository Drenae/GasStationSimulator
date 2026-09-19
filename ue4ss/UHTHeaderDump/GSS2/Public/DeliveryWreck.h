#pragma once
#include "CoreMinimal.h"
#include "IteractableActorTask.h"
#include "DeliveryWreck.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDeliveryWreck : public UIteractableActorTask {
    GENERATED_BODY()
public:
    UDeliveryWreck();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeliveryCancel();
    
};

