#pragma once
#include "CoreMinimal.h"
#include "RentableEquipmentSlot.h"
#include "SavedWayPoint.h"
#include "SavedRentalSpot.generated.h"

USTRUCT(BlueprintType)
struct FSavedRentalSpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRentableEquipmentSlot SavedRentalSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedWayPoint SavedWayPoint;
    
    GSS2_API FSavedRentalSpot();
};

