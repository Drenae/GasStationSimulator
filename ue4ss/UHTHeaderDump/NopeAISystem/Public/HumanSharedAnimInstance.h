#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "HumanSharedAnimInstance.generated.h"

class AActor;
class UActorComponent;
class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class NOPEAISYSTEM_API UHumanSharedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WarpingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> RootAttachedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> HandLAttachedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> HandRAttachedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* RootStaticMeshToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* HandLStaticMeshToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* HandRStaticMeshToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RootInitialMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HandLInitialMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HandRInitialMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentPositioningMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActorLHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActorRHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockWarping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPointing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPointingLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointingPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentRotationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDialogNeverLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedZippo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedObjectArray;
    
public:
    UHumanSharedAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPointingAtTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPointingAtTarget(AActor* PointingTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetWarpingTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetRootActorToAttach(AActor* NewActor, UActorComponent* RootNewComponent, FTransform RootInitialTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetRHandComponentToAttach(UActorComponent* RHandNewComponent, FTransform RHandInitialTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetLHandComponentToAttach(UActorComponent* LHandNewComponent, FTransform LHandInitialTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPositioningMontage(UAnimMontage* CurrentMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockWarping(bool IsWarpingBlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RotateToTarget(AActor* RotationTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPositioningMontage(AActor* WarpTarget, FTransform WarpTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePositioning(FVector NewDesiredLocation, FRotator NewDesiredRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetStartingRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartingLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedObjectArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDesiredLocation();
    
};

