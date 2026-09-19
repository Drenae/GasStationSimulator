#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EFuelMagazine.h"
#include "EPriceBoardInteractionType.h"
#include "InteractableBuilding.h"
#include "OnMinigameStatusChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FuelPriceBoard.generated.h"

class ATutorialVolume;
class UActionManagerSubsystem;
class UCameraComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AFuelPriceBoard : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDisplayPrice;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameStatusChanged OnMinigameStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATutorialVolume* TutorialVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmationPopupActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IsPriceBoardUnlockedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetPricePopupActiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ResetDefaultPricePopupActiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPriceBoardInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelMagazine FuelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MinigameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PriceBoardWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MinigameWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionManagerSubsystem* ActionManager;
    
public:
    AFuelPriceBoard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowConfirmationPopup(bool bOnMinigameExit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupInteractionType(EPriceBoardInteractionType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetMinigameActive(bool bNewActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenCloseAllFuelStations(bool bOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMinigameActive(bool bNewActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopupExitEvent(bool bAccepted);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupExit(bool bAccepted, bool bCloseMinigame);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInteractable();
    
    UFUNCTION(BlueprintCallable)
    void CancelMinigame(bool bIsPressed);
    
};

