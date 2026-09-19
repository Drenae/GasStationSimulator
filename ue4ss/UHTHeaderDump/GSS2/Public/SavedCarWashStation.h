#pragma once
#include "CoreMinimal.h"
#include "EBuildingPathStationState.h"
#include "SavedCarWashStation.generated.h"

USTRUCT(BlueprintType)
struct FSavedCarWashStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingPathStationState BuildingState;
    
    GSS2_API FSavedCarWashStation();
};

