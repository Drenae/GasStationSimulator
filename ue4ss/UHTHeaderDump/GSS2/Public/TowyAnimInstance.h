#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=VehicleAnimInstance -FallbackName=VehicleAnimInstance
#include "MagnetArmAnimInstance.h"
#include "TowyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSS2_API UTowyAnimInstance : public UVehicleAnimInstance, public IMagnetArmAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformUpDn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetDn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulateRope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformTurnMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformTurnMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformTurnStepFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformElevateMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformElevateMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformElevateStepFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmExtendMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmExtendMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmExtendStepFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetDownMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetDownMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetDownStepFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulateRopeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulateRopeMaxValue;
    
    UTowyAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmVertical(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisMoveArmHorizontal(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisLowerMagnet(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxisExtendArm(float Value, bool& MinLimitReached, bool& MaxLimitReached);
    

    // Fix for true pure virtual functions not being implemented
};

