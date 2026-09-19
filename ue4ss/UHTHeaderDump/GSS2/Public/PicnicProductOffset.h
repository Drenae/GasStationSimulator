#pragma once
#include "CoreMinimal.h"
#include "PicnicProductOffset.generated.h"

USTRUCT(BlueprintType)
struct FPicnicProductOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProductNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YOffset;
    
    GSS2_API FPicnicProductOffset();
};

