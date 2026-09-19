#pragma once
#include "CoreMinimal.h"
#include "ECustomizationPaintType.h"
#include "EFinishMaskType.h"
#include "CarPlannedPaint.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarPlannedPaint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationPaintType PaintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinishMaskType MaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedColorIndexes;
    
    FCarPlannedPaint();
};

