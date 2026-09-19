#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DragoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UDragoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDragoWidget();

    UFUNCTION(BlueprintCallable)
    void YButtonAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void YButton_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void YButton_Press();
    
    UFUNCTION(BlueprintCallable)
    void XButtonAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void XButton_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void XButton_Press();
    
    UFUNCTION(BlueprintCallable)
    void SetStaticCounter(int32 InCounterValue);
    
    UFUNCTION(BlueprintCallable)
    void RightTriggerAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RightTrigger_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RightTrigger_Press();
    
    UFUNCTION(BlueprintCallable)
    void RightBumperAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RightBumper_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RightBumper_Press();
    
    UFUNCTION(BlueprintCallable)
    void LeftTriggerAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeftTrigger_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeftTrigger_Press();
    
    UFUNCTION(BlueprintCallable)
    void LeftBumperAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeftBumper_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeftBumper_Press();
    
    UFUNCTION(BlueprintCallable)
    void IncresCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStaticCounter();
    
    UFUNCTION(BlueprintCallable)
    void DPadUpAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadUp_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadUp_Press();
    
    UFUNCTION(BlueprintCallable)
    void DPadRightAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadRight_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadRight_Press();
    
    UFUNCTION(BlueprintCallable)
    void DPadLeftAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadLeft_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadLeft_Press();
    
    UFUNCTION(BlueprintCallable)
    void DPadDownAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadDown_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DPadDown_Press();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCounter();
    
    UFUNCTION(BlueprintCallable)
    void BButtonAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BButton_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BButton_Press();
    
    UFUNCTION(BlueprintCallable)
    void AButtonAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AButton_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AButton_Press();
    
};

