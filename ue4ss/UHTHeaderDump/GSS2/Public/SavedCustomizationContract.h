#pragma once
#include "CoreMinimal.h"
#include "CarPartData.h"
#include "EContractRequirement.h"
#include "ECustomizationContractType.h"
#include "EDecalUnlockType.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "SavedCarPaint.h"
#include "SavedCarPart.h"
#include "SavedContract.h"
#include "SavedCustomizationContract.generated.h"

class ADecalToPaint;
class AJunkyardCarWreck;

USTRUCT(BlueprintType)
struct FSavedCustomizationContract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedContract SavedBasicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SavedContractCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationContractType SavedCustomizationContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType SavedRequiredCarWreckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJunkyardCarWreck> SavedRequiredCarWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity SavedRequiredCarWreckTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarPartData SavedRequiredCarWreckStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity SavedCarTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, FSavedCarPart> SavedRequiredCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJunkyardCarPartType> SavedDifferentColorCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADecalToPaint>> SavedDecalsOfRequiredCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedRequiredDecalsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecalUnlockType SavedRequiredDecalsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint SavedRequiredPaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedMoneyRewardBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedContractPointsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EContractRequirement> SavedContractRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedArrayIndex;
    
    GSS2_API FSavedCustomizationContract();
};

