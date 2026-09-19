#pragma once
#include "CoreMinimal.h"
#include "StringCurve.h"
#include "BakedStringCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedStringCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringCurve StringCurve;
    
    ENGINE_API FBakedStringCustomAttribute();
};

