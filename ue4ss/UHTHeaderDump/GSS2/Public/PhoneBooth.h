#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "InteractableActor.h"
#include "PhoneBooth.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class GSS2_API APhoneBooth : public AInteractableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RingingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PickUpAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CallAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCooldownActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownTimerHandle;
    
public:
    APhoneBooth(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopRinging();
    
    UFUNCTION(BlueprintCallable)
    void StartRinging();
    
    UFUNCTION(BlueprintCallable)
    void SetCooldown(float CooldownDuration);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnCooldown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndCooldown();
    
};

