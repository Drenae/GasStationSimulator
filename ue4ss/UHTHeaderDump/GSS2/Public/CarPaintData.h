#pragma once
#include "CoreMinimal.h"
#include "SavedCarPaint.h"
#include "CarPaintData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct GSS2_API FCarPaintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint CurrentPaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint PlannedPaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CustomizableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaintChanged;
    
    FCarPaintData();
};

