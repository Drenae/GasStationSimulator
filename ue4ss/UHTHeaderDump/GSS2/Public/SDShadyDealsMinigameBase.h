#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityType.h"
#include "SDTimedMinigameBase.h"
#include "SDShadyDealsMinigameBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASDShadyDealsMinigameBase : public ASDTimedMinigameBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDGangActivityType GangActivityType;
    
public:
    ASDShadyDealsMinigameBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool TryDetectFraud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessFraudDetection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFraudDetected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDGangActivityType GetGangActivity() const;
    
};

