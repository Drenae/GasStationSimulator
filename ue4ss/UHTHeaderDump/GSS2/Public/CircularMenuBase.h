#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CircularMenuBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UCircularMenuBase : public UUserWidget {
    GENERATED_BODY()
public:
    UCircularMenuBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectionMaking_Gamepad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectionMaking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit();
    
};

