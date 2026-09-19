#pragma once
#include "CoreMinimal.h"
#include "DifficultyDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDifficultyDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DifficultyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DifficultyText;
    
    GSS2_API FDifficultyDescription();
};

