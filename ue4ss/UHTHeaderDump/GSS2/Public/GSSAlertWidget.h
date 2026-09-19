#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "GSSAlertWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSSAlertWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGSSAlertWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAlertValues(const FText& TextToEnter, float TimeToShow);
    
};

