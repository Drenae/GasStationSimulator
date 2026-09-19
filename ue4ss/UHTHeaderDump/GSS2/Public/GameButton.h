#pragma once
#include "CoreMinimal.h"
#include "GSSWorldObject.h"
#include "GameButton.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGameButton : public AGSSWorldObject {
    GENERATED_BODY()
public:
    AGameButton(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonPress();
    
};

