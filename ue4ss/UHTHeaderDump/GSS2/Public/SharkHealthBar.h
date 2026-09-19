#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SharkHealthBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USharkHealthBar : public UUserWidget {
    GENERATED_BODY()
public:
    USharkHealthBar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshWidget(float CurrentHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailed();
    
};

