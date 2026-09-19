#pragma once
#include "CoreMinimal.h"
#include "CarWashDesignerSettings.generated.h"

USTRUCT(BlueprintType)
struct FCarWashDesignerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaterPressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashSpawnEveryXPressureUsed;
    
    GSS2_API FCarWashDesignerSettings();
};

