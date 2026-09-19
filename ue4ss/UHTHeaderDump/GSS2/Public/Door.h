#pragma once
#include "CoreMinimal.h"
#include "EDoorState.h"
#include "GSSWorldObject.h"
#include "OnDoorStateChangedDelegate.h"
#include "Door.generated.h"

UCLASS(Blueprintable)
class GSS2_API ADoor : public AGSSWorldObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorStateChanged OnDoorStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorState StartingDoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorState ActiveDoorState;
    
public:
    ADoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDoorState(EDoorState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateUpdated(EDoorState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorState GetDoorState();
    
};

