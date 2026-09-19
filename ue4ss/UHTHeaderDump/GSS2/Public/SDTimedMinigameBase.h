#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "SDMinigameBase.h"
#include "SDMinigameGeneralDelegateDelegate.h"
#include "SDTimedMinigameBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASDTimedMinigameBase : public ASDMinigameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameGeneralDelegate MinigameTimeOutDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_MinigameTimeOut;
    
public:
    ASDTimedMinigameBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartTimeOutTimer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinigameTimeOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimedOut() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTimeOutTimer();
    
};

