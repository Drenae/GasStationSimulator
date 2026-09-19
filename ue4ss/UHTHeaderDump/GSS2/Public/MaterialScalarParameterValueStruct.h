#pragma once
#include "CoreMinimal.h"
#include "MaterialScalarParameterValueStruct.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FMaterialScalarParameterValueStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FMaterialScalarParameterValueStruct();
};

