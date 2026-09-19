#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGuestServiceDifficulty.h"
#include "GSSBaseWidget.h"
#include "OnRvMinigameWidgetClosedDelegate.h"
#include "RVServiceExperienceData.h"
#include "RvMinigameWidget.generated.h"

class ARvGuestServiceSpot;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URvMinigameWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRvMinigameWidgetClosed OnRvMinigameWidgetClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GuestServiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvGuestServiceSpot* ServiceSpotRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestServiceDifficulty DifficultySelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPhase;
    
public:
    URvMinigameWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMiniGame(FGameplayTag ServiceTag, ARvGuestServiceSpot* TargetServiceSpot, EGuestServiceDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTutorialOpened(bool bOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPhase(FName Phase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCooldownPercentageBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndMinigame(bool bSuccess, FRVServiceExperienceData ExperienceData);
    
};

