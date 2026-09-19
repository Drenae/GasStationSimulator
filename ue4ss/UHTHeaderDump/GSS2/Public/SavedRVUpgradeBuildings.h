#pragma once
#include "CoreMinimal.h"
#include "RVSavedParkingData.h"
#include "RVServiceData.h"
#include "SavedRVUpgradeBuildings.generated.h"

USTRUCT(BlueprintType)
struct FSavedRVUpgradeBuildings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVSavedParkingData> CamperSpotsSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVServiceData> ServicesToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CousinHouseLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConcertLevel;
    
    GSS2_API FSavedRVUpgradeBuildings();
};

