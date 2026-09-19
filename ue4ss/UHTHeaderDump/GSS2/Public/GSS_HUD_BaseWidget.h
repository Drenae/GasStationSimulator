#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "GSS_HUD_BaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSS_HUD_BaseWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UGSS_HUD_BaseWidget();

    UFUNCTION(BlueprintCallable)
    void NativePreConstruct();
    
};

