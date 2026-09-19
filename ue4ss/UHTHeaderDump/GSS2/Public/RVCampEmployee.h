#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EDLCName.h"
#include "ERVCamperLeftReason.h"
#include "GSSNPAICharacterBase.h"
#include "Interaction.h"
#include "OnAssignmentUpdatedDelegate.h"
#include "OnAutopayUpdatedDelegate.h"
#include "OnEmployeeResetDelegate.h"
#include "OnIsUnpaidUpdatedDelegate.h"
#include "OnMoneyEarnedUpdatedDelegate.h"
#include "OnPayCooldownUpdatedDelegate.h"
#include "RVEmployeeAssignment.h"
#include "TimeStruct.h"
#include "RVCampEmployee.generated.h"

class AActor;
class AGSSPlayerCharacter;
class AGSSPlayerState;
class APawn;
class ARVCampManager;
class ARVEmployeeRestPoint;
class ARvGuestServiceSpot;
class UAnimMontage;
class UNPAITaskBase;
class UPrimitiveComponent;
class URVEmployeeConfig;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARVCampEmployee : public AGSSNPAICharacterBase, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> ServiceTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> RestTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> ConcertTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ConcertMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> TalkToPlayerTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ConcertSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVEmployeeRestPoint> EmployeeRestPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssignmentUpdated OnAssignmentUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoneyEarnedUpdated OnMoneyEarnedUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutopayUpdated OnAutopayUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsUnpaidUpdated OnIsUnpaidUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPayCooldownUpdated OnPayCooldownUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeeReset OnEmployeeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVEmployeeConfig* EmployeeConfig;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVEmployeeAssignment> AssignedServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentServiceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AtConcertMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvGuestServiceSpot* CurrentServiceSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTalkingToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldWalkAfterTalkingToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutopayEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnpaid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAtConcert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoneyEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct PayCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerState* GSSPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDLCDeactivated;
    
public:
    ARVCampEmployee(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateServiceAssignment(FRVEmployeeAssignment Assignment, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void TryToGoToNextService(bool ForceUpdate, bool KeepIndex, int32 IndexToKeep);
    
    UFUNCTION(BlueprintCallable)
    bool TryPayEmployee();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkToEmployeeEvent();
    
    UFUNCTION(BlueprintCallable)
    void TalkToEmployee();
    
    UFUNCTION(BlueprintCallable)
    void StopTalkingToEmployee();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowServiceWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetPayCooldown(FTimeStruct NewPayCooldown);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUnpaid(bool IsUnpaid);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutopayEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAtConcert(bool NewIsAtConcert);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMoneyEarned(float NewMoneyEarned);
    
    UFUNCTION(BlueprintCallable)
    void ResetPayCooldown();
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentService();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeUpdated(const FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameCompleted(FGameplayTag ServiceTag, ARvGuestServiceSpot* ServiceBuilding, bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStopped(ERVCamperLeftReason CamperLeftReason);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadServiceAssignments(TArray<FRVEmployeeAssignment> LoadedAssignments, FGameplayTag LoadedCurrentServiceTarget);
    
    UFUNCTION(BlueprintCallable)
    void InitAfterSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideServiceWidget();
    
    UFUNCTION(BlueprintCallable)
    void GoToService(FGameplayTag Service, ARvGuestServiceSpot* ServiceSpot, bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void GoToConcert();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetPayCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnpaid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTalkingToPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutopayEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAtConcert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentServiceTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMoneyEarned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRVEmployeeAssignment> GetAssignedServices();
    
    UFUNCTION(BlueprintCallable)
    void FindNextValidService(int32 SearchStartIndex, FGameplayTag& Service, ARvGuestServiceSpot*& ServiceSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayEmployee();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractable(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    

    // Fix for true pure virtual functions not being implemented
};

