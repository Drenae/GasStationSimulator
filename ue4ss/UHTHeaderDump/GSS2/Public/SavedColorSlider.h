#pragma once
#include "CoreMinimal.h"
#include "SavedColorSlider.generated.h"

USTRUCT(BlueprintType)
struct FSavedColorSlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderV;
    
    GSS2_API FSavedColorSlider();
};

