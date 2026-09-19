#pragma once
#include "CoreMinimal.h"
#include "PlaneEntry.h"
#include "SavedRunway.generated.h"

class ATradingAirplane;

USTRUCT(BlueprintType)
struct FSavedRunway {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATradingAirplane> SavedCurrentAirplaneLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneEntry> SavedRunwaySchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavedExtraTimeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedExtraTimeLeft;
    
    GSS2_API FSavedRunway();
};

