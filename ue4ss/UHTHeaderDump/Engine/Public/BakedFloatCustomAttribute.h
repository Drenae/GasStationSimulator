#pragma once
#include "CoreMinimal.h"
#include "SimpleCurve.h"
#include "BakedFloatCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedFloatCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleCurve FloatCurve;
    
    ENGINE_API FBakedFloatCustomAttribute();
};

