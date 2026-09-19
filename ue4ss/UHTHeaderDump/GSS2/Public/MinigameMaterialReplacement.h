#pragma once
#include "CoreMinimal.h"
#include "MinigameMaterialReplacement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMinigameMaterialReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    GSS2_API FMinigameMaterialReplacement();
};

