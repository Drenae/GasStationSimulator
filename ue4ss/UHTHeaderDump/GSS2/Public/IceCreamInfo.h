#pragma once
#include "CoreMinimal.h"
#include "IceCreamInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIceCreamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IceCreamTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FlavourName;
    
    GSS2_API FIceCreamInfo();
};

