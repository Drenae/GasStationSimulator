#pragma once
#include "CoreMinimal.h"
#include "EBuildingPathStationState.h"
#include "SavedGasStationSectionDetails.generated.h"

USTRUCT(BlueprintType)
struct FSavedGasStationSectionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingPathStationState State;
    
    GSS2_API FSavedGasStationSectionDetails();
};

