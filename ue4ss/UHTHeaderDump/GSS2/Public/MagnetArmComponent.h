#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ActivateMagnetDelegate.h"
#include "ActorDetachedFromMagnetDelegate.h"
#include "ActorSnappedToMagnetDelegate.h"
#include "EMagnetDetachErrorReason.h"
#include "EMagnetState.h"
#include "EventMaxExtendArmDelegate.h"
#include "EventMaxMagnetDownDelegate.h"
#include "EventMaxMoveArmHorizontalDelegate.h"
#include "EventMaxMoveArmVerticalDelegate.h"
#include "ExtendArmDelegate.h"
#include "InputAxisExtendArmDelegate.h"
#include "InputAxisLowerMagnetDelegate.h"
#include "InputAxisMoveArmHorizontalDelegate.h"
#include "InputAxisMoveArmVerticalDelegate.h"
#include "LowerMagnetDelegate.h"
#include "MoveArmHorizontalDelegate.h"
#include "MoveArmVerticalDelegate.h"
#include "MagnetArmComponent.generated.h"

class AActor;
class UAnimInstance;
class UArrowComponent;
class UBoxComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UMagnetArmComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMagnetInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMagnetAttracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttractedActorRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttractedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagnetState MagnetState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainActorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ActionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SnapLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HorizontalBlockBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VerticalBlockBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CurrentActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentSnapBoxRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousSnapBoxRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReactivateMagnetCooldownActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DetachCooldownActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastAttractedActorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachToSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebugLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyZRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopAttractingOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttractEventIfNotInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DettachVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MagnetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> IgnoreCollisionTypeAfterSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRequiredDistanceToSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustActorRotationLerpStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustActorLerpStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalDistanceToDropOffPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceToApplayWhenSnapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceToApplayWhenReleasingMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerFloatForChangingCollisionResponseChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceToApplayWhenLosingBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LimitMaxReleaseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReleaseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> CompatibileClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireDroppableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMagnetDetachErrorReason, FText> DetachErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachErrorMessageDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivateMagnet OnActivateMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveArmVertical OnMoveArmVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveArmHorizontal OnMoveArmHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendArm OnExtendArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLowerMagnet OnLowerMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorSnappedToMagnet OnActorSnappedToMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDetachedFromMagnet OnActorDetachedFromMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisMoveArmVertical OnInputAxisMoveArmVertical;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisMoveArmHorizontal OnInputAxisMoveArmHorizontal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisExtendArm OnInputAxisExtendArm;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisLowerMagnet OnInputAxisLowerMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMaxExtendArm OnEventMaxExtendArm;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMaxMoveArmVertical OnEventMaxMoveArmVertical;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMaxMoveArmHorizontal OnEventMaxMoveArmHorizontal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMaxMagnetDown OnEventMaxMagnetDown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ActivateVehicleCollision;
    
public:
    UMagnetArmComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_PlaneTooClose();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsMagnetInUse(bool bNewIsMagnetInUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorSnapped(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveArmVertical(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveArmHorizontal(float Value);
    
    UFUNCTION(BlueprintCallable)
    void LowerMagnet(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsActorCompatible(AActor* CheckedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmVertical(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmHorizontal(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisLowerMagnet(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisExtendArm(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionActivateMagnet(bool bPressed);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitMagnetArm(USkeletalMeshComponent* MainMesh, UStaticMeshComponent* ActionRangeMesh, UArrowComponent* SnapLocationArrow, UBoxComponent* HorizontalBlockBox, UBoxComponent* VerticalBlockBox);
    
    UFUNCTION(BlueprintCallable)
    void ForceSnapToMagnet(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ExtendArm(float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMaxMoveArmVertical(bool bMaxPlatformMove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMaxMoveArmHorizontal(bool bMaxPlatformElevate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMaxMagnetDown(bool bMaxMagnetDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMaxExtendArm(bool bMaxExtend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMagnetStartsAttracing(bool bIsMagnetOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventAddForceAtSnap();
    
    UFUNCTION(BlueprintCallable)
    void EndDetachCooldown();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* DetachAttractedActor();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCollisionResponseChannelForThrownObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanDetachActor(EMagnetDetachErrorReason& ErrorReason);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInfluence();
    
    UFUNCTION(BlueprintCallable)
    void AdjustPulledActorRotation(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateMagnet_Released();
    
    UFUNCTION(BlueprintCallable)
    void ActivateMagnet_Pressed();
    
};

