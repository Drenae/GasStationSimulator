#pragma once
#include "CoreMinimal.h"
#include "SavedAirport.h"
#include "SavedAirportInventory.h"
#include "SavedAirstripStorage.h"
#include "SavedBarn.h"
#include "SavedCrashSiteManager.h"
#include "SavedDLCTradingSystemManager.h"
#include "SavedJoeCrashManager.h"
#include "SavedJoePlane.h"
#include "SavedRadioTower.h"
#include "SavedRandomDialoguesManager.h"
#include "SavedTowy.h"
#include "SavedTowysGarage.h"
#include "SavedTradeCenter.h"
#include "SavedAirstrip.generated.h"

USTRUCT(BlueprintType)
struct FSavedAirstrip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirstripCampaingCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavedIsSandstormActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedBarn SavedBarn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedAirport SavedAirport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedTradeCenter SavedTradeCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedTowysGarage SavedTowysGarage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedAirstripStorage SavedAirstripStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedRadioTower SavedRadioTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedDLCTradingSystemManager SavedDLCTradingSystemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedJoePlane SavedJoePlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCrashSiteManager SavedCrashSiteManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedTowy SavedTowy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedRandomDialoguesManager SavedRandomDialoguesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedAirportInventory SavedAirportInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedJoeCrashManager SavedJoeCrashManager;
    
    GSS2_API FSavedAirstrip();
};

