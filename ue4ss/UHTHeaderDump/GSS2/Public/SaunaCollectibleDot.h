#pragma once
#include "CoreMinimal.h"
#include "SaunaDot.h"
#include "SaunaCollectibleDot.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASaunaCollectibleDot : public ASaunaDot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmUpTimeLeft;
    
    ASaunaCollectibleDot(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWarmUpTimeLeftChanged(float TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLifeDurationPassed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDotCollected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarmingUp() const;
    
};

