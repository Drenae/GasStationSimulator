#pragma once
#include "CoreMinimal.h"
#include "GamepadInformation.generated.h"

USTRUCT(BlueprintType)
struct FGamepadInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadButtonName;
    
    GSS2_API FGamepadInformation();
};

