#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EventDisplay.generated.h"

class AActor;
class AGSSGameState;

UCLASS(Blueprintable)
class GSS2_API UEventDisplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GSSGameState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ChameleonEffectActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UEventDisplay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObject(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftTime(float NewLeftTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEventDisplay(AGSSGameState* InitGSSGameState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishEventDisplay();
    
};

