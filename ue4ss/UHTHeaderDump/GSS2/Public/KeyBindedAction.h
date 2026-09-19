#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "KeyBindedAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UKeyBindedAction : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHavingAxisScale;
    
    UKeyBindedAction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKeyInfo(FName ActionKeyName, float AxisScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckKeyInfo_CPP();
    
};

