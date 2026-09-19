#pragma once
#include "CoreMinimal.h"
#include "EBuildingPathStationState.h"
#include "RentableEquipmentSlot.h"
#include "SavedRentalSpot.h"
#include "SavedEqRentalBuilding.generated.h"

USTRUCT(BlueprintType)
struct FSavedEqRentalBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EqRentalBuildingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingPathStationState SavedBuildingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedRentalSpot> SavedRentalSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRentableEquipmentSlot> SavedReplacementEqQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedDeathsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedReplacementTresholdValue;
    
    GSS2_API FSavedEqRentalBuilding();
};

