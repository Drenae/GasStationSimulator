#pragma once
#include "CoreMinimal.h"
#include "DragoWidget.h"
#include "MinigameBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMinigameBaseWidget : public UDragoWidget {
    GENERATED_BODY()
public:
    UMinigameBaseWidget();

    UFUNCTION(BlueprintCallable)
    void Show(bool bShow);
    
};

