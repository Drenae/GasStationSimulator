#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EInteractionOutput.h"
#include "ERVCamperLeftReason.h"
#include "AConcertDanceVolume.generated.h"

class AGSSPlayerCharacter;
class UAnimMontage;
class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API AAConcertDanceVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DanceMontageStartLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DanceMontageEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoveringGuitar;
    
public:
    AAConcertDanceVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StopDancing_Internal(const EInteractionOutput& Branches, bool bGamepadInitialized);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopDancing();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartDancing_Internal(bool bIsPressed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDancing(bool IsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDancingHint(bool ShowHint, bool bCurrentlyDancing);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerShowInteraction(AActor* InteractionActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHideInteraction(AActor* InteractionActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStopped(ERVCamperLeftReason CamperLeftReason);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void LockDancing();
    
    UFUNCTION(BlueprintCallable)
    bool IsConcertActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddBinding(AGSSPlayerCharacter* Player);
    
};

