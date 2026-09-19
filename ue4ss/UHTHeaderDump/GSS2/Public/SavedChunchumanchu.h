#pragma once
#include "CoreMinimal.h"
#include "SavedBaseInteractableBuilding.h"
#include "SavedEqRentalBuilding.h"
#include "SavedPartyBoat.h"
#include "SavedShark.h"
#include "SavedVolcano.h"
#include "SavedWaterVehicle.h"
#include "TimeStruct.h"
#include "SavedChunchumanchu.generated.h"

USTRUCT(BlueprintType)
struct FSavedChunchumanchu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedVolcano SavedVolcano;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedBaseInteractableBuilding SavedToilet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedBaseInteractableBuilding SavedShower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedEqRentalBuilding SavedScubaEqRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedEqRentalBuilding SavedSurfingEqRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedWaterVehicle> SavedWaterVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedShark SavedShark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedPartyBoat SavedPartyBoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct SavedLastDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedTotalDeathsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoconutThrowCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoconutRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStreakWithoutVolcanoEruption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LongestStreakWithoutVolcanoEruption;
    
    GSS2_API FSavedChunchumanchu();
};

