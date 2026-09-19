#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "Employess_hud.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UEmployess_hud : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UEmployess_hud();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRefreshOwnedEmploye();
    
};

