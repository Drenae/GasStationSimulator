#pragma once
#include "CoreMinimal.h"
#include "IntegralCurve.h"
#include "BakedIntegerCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedIntegerCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntegralCurve IntCurve;
    
    ENGINE_API FBakedIntegerCustomAttribute();
};

