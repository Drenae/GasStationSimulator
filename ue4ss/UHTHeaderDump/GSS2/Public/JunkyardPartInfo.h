#pragma once
#include "CoreMinimal.h"
#include "EJunkyardPartRarity.h"
#include "JunkyardPartTransformInfo.h"
#include "JunkyardPartInfo.generated.h"

USTRUCT(BlueprintType)
struct FJunkyardPartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity PartRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJunkyardPartTransformInfo> CarTypeDependendTransforms;
    
    GSS2_API FJunkyardPartInfo();
};

