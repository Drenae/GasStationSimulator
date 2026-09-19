#pragma once
#include "CoreMinimal.h"
#include "RoofLevel.generated.h"

USTRUCT(BlueprintType)
struct FRoofLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GasStationLevel;
    
    GSS2_API FRoofLevel();
};

