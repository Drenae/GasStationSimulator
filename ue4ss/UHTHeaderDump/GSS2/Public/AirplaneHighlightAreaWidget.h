#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AirplaneHighlightAreaWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UAirplaneHighlightAreaWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAirplaneHighlightAreaWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceShowTutorial();
    
};

