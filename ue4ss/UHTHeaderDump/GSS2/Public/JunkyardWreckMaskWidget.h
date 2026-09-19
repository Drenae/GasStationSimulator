#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "JunkyardWreckMaskWidget.generated.h"

class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UJunkyardWreckMaskWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UJunkyardWreckMaskWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(AJunkyardCarWreckCustomizable* CarWreck);
    
};

