#pragma once
#include "CoreMinimal.h"
#include "CarPartReward.h"
#include "EJunkyardPartRarity.h"
#include "HireableDriver.h"
#include "SavedContract.h"
#include "SavedDeliveryContract.generated.h"

class AJunkyardCarWreck;

USTRUCT(BlueprintType)
struct FSavedDeliveryContract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedContract SavedBasicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity SavedContractTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHireableDriver SavedHiredDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedOriginBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedCustomizableWreckChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJunkyardCarWreck> SavedCarWreckSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarPartReward> SavedCarPartRewards;
    
    GSS2_API FSavedDeliveryContract();
};

