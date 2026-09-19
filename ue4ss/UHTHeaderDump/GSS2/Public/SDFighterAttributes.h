#pragma once
#include "CoreMinimal.h"
#include "SDFighterAttributes.generated.h"

USTRUCT(BlueprintType)
struct FSDFighterAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Defence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Agility;
    
    GSS2_API FSDFighterAttributes();
};

