#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ECustomerType.h"
#include "IteractableActorTask.h"
#include "GoToGuestService.generated.h"

class AInteractableActor;
class ARvGuestServiceSpot;
class ARvMinigameInWorld;
class UAnimMontage;

UCLASS(Blueprintable)
class GSS2_API UGoToGuestService : public UIteractableActorTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateAutocompletionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutocompletionUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Autocompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameCompleted;
    
public:
    UGoToGuestService();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAutocompletion();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBindings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayGuestMontage(FGameplayTag GuestMontageTag, UAnimMontage*& OutPlayingMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayGuestHandsAnim(FGameplayTag GuestHandsAnimConfigTag);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted(ARvMinigameInWorld* MinigameInWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMinigameCompleted(FGameplayTag MinigameTag, ARvGuestServiceSpot* CompletedServiceSpot, bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontage(FGameplayTag GuestMontageTag) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutocompleted() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAnimMontage*> GetPlayingGuestServiceMontages() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishAutocompleteService();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAutocompleteService();
    
    UFUNCTION(BlueprintCallable)
    bool AreLocationRequirementsMet(ARvGuestServiceSpot* TargetBuilding, FGameplayTag TargetService);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool AdjustCharacterLook();
    
public:
    UFUNCTION(BlueprintCallable)
    AInteractableActor* AddAsCustomer(ECustomerType CustomerType, FGameplayTag TargetService);
    
};

