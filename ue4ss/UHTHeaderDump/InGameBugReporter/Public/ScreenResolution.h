#pragma once
#include "CoreMinimal.h"
#include "ScreenResolution.generated.h"

USTRUCT(BlueprintType)
struct FScreenResolution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    INGAMEBUGREPORTER_API FScreenResolution();
};

