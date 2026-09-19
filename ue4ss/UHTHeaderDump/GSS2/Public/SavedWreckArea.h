#pragma once
#include "CoreMinimal.h"
#include "SavedWreckArea.generated.h"

class ACarWreckPlaceableArea;

USTRUCT(BlueprintType)
struct FSavedWreckArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACarWreckPlaceableArea> SavedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaZRotation;
    
    GSS2_API FSavedWreckArea();
};

