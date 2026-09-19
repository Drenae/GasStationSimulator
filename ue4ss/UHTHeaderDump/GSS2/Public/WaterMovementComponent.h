#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BeginGoingHomeComponentDelegate.h"
#include "EObstacleSide.h"
#include "FinishMovingComponentDelegate.h"
#include "WaterMovementComponent.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UWaterMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishMovingComponent OnFinishMoving;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginGoingHomeComponent OnBeginGoingHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayedTurnSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZLocationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZLocationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZLocationSoftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZLocationSoftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZSoftCorrectionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSlowBeforeDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDestinationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSpeedUpFarFromDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarSpeedBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarFromDestinationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDestinationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CustomDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopedMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Home;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoingHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HomeTargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> SpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DeSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCDeSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> StoppingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCStoppingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ReverseMovementMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCReverseMovementMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> VehicleDestroyMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCDestroyMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> VehicleHitReactLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> VehicleHitReactRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCHitReactLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NPCHitReactRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDespawnSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleMoveTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathArrayLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHomePathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HomePointArrayLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingStopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentMovementPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPositionLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExplosionScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObstacleSide ObstacleSide;
    
public:
    UWaterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SharkDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void SetUseTargetActor(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSpawnMontage(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDeSpawnMontage(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTurn(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSingleMoveTo(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseMovement(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPathArrayLenght(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopedMovementTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLockLocationAndRotation(bool IsPositionLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetHomePointArrayLenght(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHome(AActor* HomeReference);
    
    UFUNCTION(BlueprintCallable)
    void SetGoingHome(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPathIndex(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMovementPoint(AActor* NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHomePathIndex(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeAttacked(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetObstacleDetection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAttackAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OverrideTurnRate(float NewTurnRate);
    
    UFUNCTION(BlueprintCallable)
    void MoveOnWaterStart();
    
    UFUNCTION(BlueprintCallable)
    void MoveOnWaterEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMovement(bool IsLoadedFromSave, bool IsGoingHome, int32 CurrentWaterMovementPointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoHomeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSpawnMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDeSpawnMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSingleMoveTo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReverseMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoopedMovementTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHome();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGoingHome();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentMovementPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeAttacked();
    
};

