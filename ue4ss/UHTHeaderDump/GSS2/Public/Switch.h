#pragma once
#include "CoreMinimal.h"
#include "ESwitchState.h"
#include "GSSWorldObject.h"
#include "Switch.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASwitch : public AGSSWorldObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchState StartingSwitchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchState ActiveSwitchState;
    
public:
    ASwitch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSwitchState(ESwitchState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateUpdated(ESwitchState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwitchState GetSwitchState();
    
};

