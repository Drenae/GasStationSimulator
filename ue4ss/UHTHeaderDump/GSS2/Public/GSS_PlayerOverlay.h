#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "GSS_HUD_BaseWidget.h"
#include "GSS_PlayerOverlay.generated.h"

class AActor;
class AGSSPlayerCharacter;
class AGSSPlayerController;
class APawn;
class UEmployess_hud;
class UGSSInnerWidget;
class UHorizontalBox;
class UImage;
class UOverlay;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSS_PlayerOverlay : public UGSS_HUD_BaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSInnerWidget* WBP_Crosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SharkHealthBarHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SharkNotificationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSInnerWidget* TabWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSInnerWidget* Station_Closed_WBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmployess_hud* Employees_hud_WBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* DisplayItemInfo_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_Print_LogTracedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* OneTimePopupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* QuestAndChallengesHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PointerWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OpenCloseGasStationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsQuesHolderVisible;
    
    UGSS_PlayerOverlay();

    UFUNCTION(BlueprintCallable)
    void UpdateHandleActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void UnhideQuestAndChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleTrafficMeterDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleCinemaInteractionInfo(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowVolcanoTutorial();
    
    UFUNCTION(BlueprintCallable)
    void ShowTabHolder(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowRentalTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLeftCornerBindings(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void ShowHideCrossOnPossessed(const APawn* Character);
    
    UFUNCTION(BlueprintCallable)
    void ShowCrosshair(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshRunway();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideWhitePointer(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HideQuestAndChallenges();
    
    UFUNCTION(BlueprintCallable)
    void GasSignOpenClose(bool bIsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FoldQuestAndChallengesHolder();
    
};

