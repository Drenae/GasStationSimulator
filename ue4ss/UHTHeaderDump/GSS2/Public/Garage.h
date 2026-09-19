#pragma once
#include "CoreMinimal.h"
#include "EGarageMinigame.h"
#include "GarageAreaEnteredDelegate.h"
#include "GarageAreaLeftDelegate.h"
#include "GarageCarLiftSwitchDelegate.h"
#include "GarageGameFinishedDelegate.h"
#include "GarageGameStartedDelegate.h"
#include "GarageMinigame_EndedDelegate.h"
#include "GarageMinigame_FailNotificationDelegate.h"
#include "GarageMinigame_StartedDelegate.h"
#include "GarageMinigame_SuccessNotificationDelegate.h"
#include "House.h"
#include "Garage.generated.h"

class ACarLift;
class AGSSWheeledVehicle;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AGarage : public AHouse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageGameStarted OnGarageGameStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageGameFinished OnGarageGameFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageAreaEntered OnGarageEnteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageAreaLeft OnGarageLeftEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageMinigame_SuccessNotification OnGarageMinigameSuccessNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageMinigame_FailNotification OnGarageMinigameFailNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageMinigame_Started OnGarageMinigameStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageMinigame_Ended OnGarageMinigameEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGarageCarLiftSwitch OnGarageLiftAreaSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACarLift*> CarLiftRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GameWidgetREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstCustomerServed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHighlightingVehicleParts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInGarage;
    
public:
    AGarage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerLeftGarage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerEnteredGarage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGarageMinigameStart(EGarageMinigame GarageMinigameType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGarageMinigameEnd(EGarageMinigame GarageMinigameType, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGarageGameStarted(ACarLift* CarLiftRef, AGSSWheeledVehicle* CarRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGarageGameFinished(ACarLift* CarLiftRef, AGSSWheeledVehicle* CarRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerInGarage();
    
};

