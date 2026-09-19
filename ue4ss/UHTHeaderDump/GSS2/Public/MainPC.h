#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGameActivityType.h"
#include "GSSBaseWidget.h"
#include "OnFadedOutDelegate.h"
#include "MainPC.generated.h"

class UBorder;
class UDA_MainPCButton;
class UHorizontalBox;
class UImage;
class UMinigameTutorialWidget;
class UOverlay;
class UPC_Base_Card;
class UPC_TopMenuButton;
class UPcBaseTab;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMainPC : public UGSSBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPC_TopMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPcBaseTab* CurrentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_0;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MainBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ButtonsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Cards_WrapBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinigameTutorialWidget* MiniGames_Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Bottom_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* FullScreenOverlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFadedOut OnFadedOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTabLoading;
    
public:
    UMainPC();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTutorial(bool HasTutorial, EGameActivityType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void TryForceOpenTutorial(FGameplayTag TutorialTag, bool HasTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetBackGroundAsync(TSoftObjectPtr<UTexture2D> BackgroundImager);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenTabByTabToCreate(TSoftClassPtr<UPcBaseTab> ClassToSearch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotificationOnTabChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPcBaseTab* GetCurrentTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPC_TopMenuButton*> GetButtons();
    
private:
    UFUNCTION(BlueprintCallable)
    void FillButtons();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomFadeIn();
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateTabAsync(TSoftClassPtr<UPcBaseTab> TabClass, bool bSetCenterFill);
    
    UFUNCTION(BlueprintCallable)
    void CreateButtons(TSoftClassPtr<UPC_TopMenuButton> ButtonClass, const TArray<UDA_MainPCButton*> InButtons);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClosePC(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTabByCard(UPC_Base_Card* TabRef);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTab(UPC_TopMenuButton* ButtonREF);
    
};

