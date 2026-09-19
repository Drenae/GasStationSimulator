#pragma once
#include "CoreMinimal.h"
#include "SavedCarPaint.h"
#include "SavedCarPaintData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCarPaintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint CurrentCarPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint PlannedCarPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaintChanged;
    
    GSS2_API FSavedCarPaintData();
};

