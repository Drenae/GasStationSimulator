#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EMaskMaterialRedrawMethod.h"
#include "MaskMaterialSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaskMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ToTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaskMaterialRedrawMethod> RedrawMethod;
    
    BACKGROUNDBLURWITHMASK_API FMaskMaterialSetting();
};

