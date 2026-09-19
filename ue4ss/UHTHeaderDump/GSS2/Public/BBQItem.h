#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BBQItemCookingProgressUpdatedDelegate.h"
#include "BBQItemStateChangedDelegate.h"
#include "BBQSlotChangedDelegate.h"
#include "EBBQItemState.h"
#include "Item.h"
#include "MoveEndedDelegate.h"
#include "BBQItem.generated.h"

class ABBQItem;
class ARvMinigameInWorld_BBQ;
class UBBQSlotComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API ABBQItem : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQItemCookingProgressUpdated OnCookingProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveEnded OnMoveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQItemStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectStateThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQSlotChanged OnSlotChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld_BBQ* MinigameInWorldBBQ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredCookingTimeDeviance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredCookingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeightDuringMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckCloseCookingTimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBBQItemState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBBQSlotComponent> Slot;
    
public:
    ABBQItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSlot(UBBQSlotComponent* NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetCookingProgress(float NewCookingProgress);
    
    UFUNCTION(BlueprintCallable)
    void MoveToSmoothly(FTransform Target, float Duration, bool bSkipScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateProgressToPerfect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBBQItemState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBBQSlotComponent* GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOnlyCurrentStateProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredCookingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCookingRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCookingProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableActorCollisionIfOnCookingSlot(ABBQItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCookingProgress(float DeltaCookingProgress);
    
};

