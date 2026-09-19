#pragma once
#include "CoreMinimal.h"
#include "CarWreckPartsBasket.h"
#include "CarWrecksBasket.h"
#include "CustomizationContractChancesBasket.h"
#include "EJunkyardCarPartType.h"
#include "HireableDriver.h"
#include "SavedContractSlot.h"
#include "SavedState.h"
#include "TimeStruct.h"
#include "SavedContractsManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedContractsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedState> SavedUnlockedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedContractSlot> SavedContractSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHireableDriver> SavedUnlockedDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWrecksBasket> SavedCarWrecksBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedNumberOfCarWrecksType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckPartsBasket> SavedDedicatedCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckPartsBasket> SavedGarageCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, int32> SavedNumberOfModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationContractChancesBasket> SavedContractAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct SavedNextDeliveriesRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct SavedNextDriversRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct SavedNextContractsRefresh;
    
    GSS2_API FSavedContractsManager();
};

