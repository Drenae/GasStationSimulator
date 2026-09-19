#pragma once
#include "CoreMinimal.h"
#include "RequiredDecal.generated.h"

class ADecalToPaint;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct GSS2_API FRequiredDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADecalToPaint> RequiredDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DecalIcon;
    
    FRequiredDecal();
};

