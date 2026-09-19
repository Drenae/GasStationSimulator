#pragma once
#include "CoreMinimal.h"
#include "SavedTowysGarage.generated.h"

USTRUCT(BlueprintType)
struct FSavedTowysGarage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TowysGarageLevel;
    
    GSS2_API FSavedTowysGarage();
};

