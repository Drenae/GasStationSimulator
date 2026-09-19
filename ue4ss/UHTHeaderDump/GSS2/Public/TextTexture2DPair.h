#pragma once
#include "CoreMinimal.h"
#include "TextTexture2DPair.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GSS2_API FTextTexture2DPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture2D;
    
    FTextTexture2DPair();
};

