#pragma once
#include "CoreMinimal.h"
#include "MinigameBaseWidget.h"
#include "MinigameCoolantCheckWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMinigameCoolantCheckWidget : public UMinigameBaseWidget {
    GENERATED_BODY()
public:
    UMinigameCoolantCheckWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinigameValues(float MinVal, float MaxVal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentValue(float CurVal);
    
};

