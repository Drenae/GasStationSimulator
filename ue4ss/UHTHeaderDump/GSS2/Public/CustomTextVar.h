#pragma once
#include "CoreMinimal.h"
#include "ECustomTextVariableType.h"
#include "CustomTextVar.generated.h"

USTRUCT(BlueprintType)
struct FCustomTextVar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomTextVariableType TextVariableType;
    
    GSS2_API FCustomTextVar();
};

