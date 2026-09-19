#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NopeAnimInstance -FallbackName=NopeAnimInstance
#include "EJoeSittingState.h"
#include "EMontageCancelReason.h"
#include "EMontagePilotState.h"
#include "PilotsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSS2_API UPilotsAnimInstance : public UNopeAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionRepeatAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoeSittingState JoeSittingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontagePilotState PilotMontageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageCancelReason MontageCancelReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterMovementPlayRate;
    
public:
    UPilotsAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetWaterMovementPlayRate(float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetJoeSittingState(EJoeSittingState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetActionRepeatAmount(int32 NewInt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMontageStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMontageCancelled(EMontageCancelReason CancelReason);
    
    UFUNCTION(BlueprintCallable)
    float GetWaterMovementPlayRate();
    
    UFUNCTION(BlueprintCallable)
    EMontagePilotState GetPilotMontageState();
    
    UFUNCTION(BlueprintCallable)
    EMontageCancelReason GetMontageCancleReason();
    
    UFUNCTION(BlueprintCallable)
    EJoeSittingState GetJoeSittingState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionRepeatAmount();
    
    UFUNCTION(BlueprintCallable)
    void ChangePilotMontageState(EMontagePilotState NewPilotMontageState);
    
};

