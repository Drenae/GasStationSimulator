#pragma once
#include "CoreMinimal.h"
#include "SavedAirplane.h"
#include "SuccessfulTradesLevel.h"
#include "TradingBoost.h"
#include "UnlockedSkill.h"
#include "SavedDLCTradingSystemManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedDLCTradingSystemManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedAirplane> SavedSpawnedAirplanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedSkill> SavedUnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedSkill> SavedUsedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTradingBoost> SavedUnavailableBoosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingBoost SavedActiveBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuccessfulTradesLevel SavedCurrentSuccessfulTradesLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedCurrentSuccessfulTradesNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavedIsTutorialItemsAdded;
    
    GSS2_API FSavedDLCTradingSystemManager();
};

