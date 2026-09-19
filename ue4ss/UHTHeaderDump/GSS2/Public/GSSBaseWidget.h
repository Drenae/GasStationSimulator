#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EUnlockableUIState.h"
#include "UIVisibilityInterface.h"
#include "GSSBaseWidget.generated.h"

class UGSSAlertWidget;
class UGlobalEventSubsystem;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSSBaseWidget : public UUserWidget, public IUIVisibilityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WidgetsGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediatelyDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSAlertWidget* AlertWidget;
    
    UGSSBaseWidget();

    UFUNCTION(BlueprintCallable)
    void ShowMessageOnScreen_Implementation(const FText& ToShow, const float& Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowMessageOnScreen(const FText& ToShow, const float& Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FEventReply ShouldPreviewNavigationHandleKey(const FKeyEvent& InKeyEvent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FEventReply ShouldNavigationHandleKey(const FKeyEvent& InKeyEvent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void PlayUiSound(FName SoundName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGlobalEventSubsystem* GetGlobalEventSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomEscape();
    
    UFUNCTION(BlueprintCallable)
    EUnlockableUIState CheckState(FGameplayTag InTag);
    

    // Fix for true pure virtual functions not being implemented
};

