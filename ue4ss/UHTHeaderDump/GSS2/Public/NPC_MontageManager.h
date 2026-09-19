#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "NPC_MontageManager.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequence;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UNPC_MontageManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentPositioningStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSittingStartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentSittingEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentExtraObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentExtraObjectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> CurrentlyAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* CurrentObjectToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> StartingAttachedObjectTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CurrentExtraObjectSkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentlySpawnedActorsInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> CurrentHandsLayerPose;
    
public:
    UNPC_MontageManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnActorInHands(TSubclassOf<AActor> ActorToSpawn, FName SocketName, FTransform SocketTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SittingHitReact(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySittingMontage(USceneComponent* SittingWarpTarget, float PlayRate, FName StartingSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySittingEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRVSpawningAnimation(AActor* CurrentRV, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRVMinigameMainSKMAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPositioningStepMontage(USceneComponent* WarpTarget, UAnimMontage* MontageToPlayAfterPositioning, AActor* ExtraObject, UAnimMontage* ExtraObjectMontage, UPrimitiveComponent* ObjectToAttach, bool bShouldResetDefaultCharState, float PlayRate, FName StartingSection, bool bShouldPlayExtraObjectMontage, bool bShouldAttachObject, USkeletalMeshComponent* ExtraObjectSkelMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayExtraObjectMontage(AActor* ActorReference, UAnimMontage* ExtraObjectMontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEndMontage(UAnimMontage* MontageToPlay, bool bShouldResetDefaultCharState, float PlayRate, UAnimMontage* ExtraObjectMontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GuestServiceSpawnActorInHand(TSubclassOf<AActor> ActorToSpawn, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishPositioningIfActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAfterPositioningMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetachObjectFromHand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DespawnSpawnedActosInHands();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivateHandsLayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachObjectToHand(UActorComponent* ObjectToAttach, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateHandLayer(FGameplayTag CarryingPose);
    
};

