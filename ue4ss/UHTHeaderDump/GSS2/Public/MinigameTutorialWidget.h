#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
#include "EGameActivityType.h"
#include "GSSWidget.h"
#include "OnMinigameWidgetClosedSignatureDelegate.h"
#include "OnMinigameWidgetOpenedSignatureDelegate.h"
#include "TutorialData.h"
#include "MinigameTutorialWidget.generated.h"

class AGSSGameState;
class AGSS_NewHud;
class UImage;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UMinigameTutorialWidget : public UGSSWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSS_NewHud* HUD;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameWidgetClosedSignature OnMinigameWidgetClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameWidgetOpenedSignature OnMinigameWidgetOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameActivityType TutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Tutorial_IMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialTitle_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialDescription_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TutorialDescription_Reach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GameStateRef;
    
public:
    UMinigameTutorialWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsPlayerOverlayTutorial(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromHUD();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshTutorialDescription();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTipButton(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceTutorialOpened(bool Force);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FillWidgets(FTutorialData TutorialData, bool bCreateTutorial);
    
public:
    UFUNCTION(BlueprintCallable)
    void FillTutorialInfo(EGameActivityType _TutorialType, bool bCreateTutorial);
    
    UFUNCTION(BlueprintCallable)
    void CreateTutorialAndSetType(EGameActivityType _TutorialType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTutorialIfOpened();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeInputDevice(bool IsGamepad);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddToHUD();
    
};

