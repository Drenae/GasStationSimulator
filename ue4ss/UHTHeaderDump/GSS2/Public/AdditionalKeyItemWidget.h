#pragma once
#include "CoreMinimal.h"
#include "GSSGamePlayWidget.h"
#include "AdditionalKeyItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UAdditionalKeyItemWidget : public UGSSGamePlayWidget {
    GENERATED_BODY()
public:
    UAdditionalKeyItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWidgetCustom();
    
};

