#pragma once
#include "CoreMinimal.h"
#include "MinigameBaseWidget.h"
#include "MinigameOilCheckWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMinigameOilCheckWidget : public UMinigameBaseWidget {
    GENERATED_BODY()
public:
    UMinigameOilCheckWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinigameValues(float MinVal, float MaxVal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentValue(float CurVal);
    
};

