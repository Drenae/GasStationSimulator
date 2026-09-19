#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "GSSOverlay.generated.h"

class AActor;
class UCircularMenuBase;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSSOverlay : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PointerWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularMenuBase* CircularMenuBaseRef;
    
public:
    UGSSOverlay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUI_Code(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTabHolder(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCrosshair(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestsFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestsFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUIImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleActor(AActor* ActorRef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GasSignOpenClose(bool bIsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeUIFromScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeBlackScreen(bool bFadeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollapseUIScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BringBackUI();
    
};

