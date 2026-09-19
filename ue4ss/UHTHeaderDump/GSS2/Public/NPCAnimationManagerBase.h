#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EMontageStatus.h"
#include "EMovementGroundType.h"
#include "NPCAnimationManagerBase.generated.h"

class AActor;
class UAnimInstance;
class UAnimMontage;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UNPCAnimationManagerBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EndTransform;
    
    UNPCAnimationManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSitting(AActor* SittingTarget);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PlayMontageGSS(UAnimMontage* AnimMontage, const float PlayRate, const float StartPosition, const FName StartingSection, FTransform TransA, FTransform TransB, const float NoMontageTime, const float ExtraTime, TEnumAsByte<EMontageStatus::Type> MontageStatus, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PartyTrigger(EMovementGroundType MovementType);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GSSDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMontageLenght(const float NoMontageTime, const float ExtraTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndSitting();
    
};

