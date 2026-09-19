#pragma once
#include "CoreMinimal.h"
#include "FuelSellPriceData.h"
#include "TimeStruct.h"
#include "TrafficManagerData.generated.h"

USTRUCT(BlueprintType)
struct FTrafficManagerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFuelSellPriceData> FuelSellPrices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTrafficEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentTrafficEventStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpcomingTrafficEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct UpcomingTrafficEventStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompletedEvents;
    
    GSS2_API FTrafficManagerData();
};

