#pragma once
#include "CoreMinimal.h"
#include "RVSavedParkingData.generated.h"

USTRUCT(BlueprintType)
struct FRVSavedParkingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParkingSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScheduledGuest;
    
    GSS2_API FRVSavedParkingData();
};

