#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EJoeAirplaneState.h"
#include "ENPCConversationType.h"
#include "PilotCharacter.h"
#include "JoeCharacter.generated.h"

class AAirplane_TapingMinigame;

UCLASS(Abstract, Blueprintable)
class GSS2_API AJoeCharacter : public APilotCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAirplane_TapingMinigame* JoeAirplane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle JoeReapiringDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FirestJoeDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoeRepairingDialogInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstDialogDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedDistansFromJoeToPlayerToTriggerDialogs;
    
public:
    AJoeCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayRandomJoeDialog(ENPCConversationType Dialogtype);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnJoePlaneStateChanged(EJoeAirplaneState NewPlaneState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTapingQuestActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerClose();
    
};

