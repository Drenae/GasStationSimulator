#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EIceCreamPadTargetSection.h"
#include "EIceCreamPadTargetType.h"
#include "IceCreamPadTargetStruct.generated.h"

USTRUCT(BlueprintType)
struct FIceCreamPadTargetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GamepadTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamPadTargetType GamepadTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamPadTargetSection GamepadTargetSection;
    
    GSS2_API FIceCreamPadTargetStruct();
};

