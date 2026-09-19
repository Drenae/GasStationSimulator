#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MagnetArmAnimInstance.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMagnetArmAnimInstance : public UInterface {
    GENERATED_BODY()
};

class IMagnetArmAnimInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmVertical(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmHorizontal(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisLowerMagnet(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisExtendArm(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
};

