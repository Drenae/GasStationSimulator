#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "CountdownWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UCountdownWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountdownDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountdownFinishTime;
    
public:
    UCountdownWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCountdown(float TimeToJump);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCountdown();
    
};

