#pragma once
#include "CoreMinimal.h"
#include "BasicContract.h"
#include "CarPartReward.h"
#include "EJunkyardCarPartType.h"
#include "WrecksCollectionContract.generated.h"

class AJunkyardCarWreck;

UCLASS(Blueprintable)
class GSS2_API UWrecksCollectionContract : public UBasicContract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomizableWreckChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJunkyardCarWreck> CarWreckRewardSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarPartReward> CarPartRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckingForStuckScheduled;
    
public:
    UWrecksCollectionContract();

    UFUNCTION(BlueprintCallable)
    bool UnlockCarPartVisibility(EJunkyardCarPartType CarPartType);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardCarName(FText InRewardCarName);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizableWreckChance(float InCustomizableWreckChance);
    
    UFUNCTION(BlueprintCallable)
    void SetCarWreckRewardSoftClass(TSoftClassPtr<AJunkyardCarWreck> InCarWreckReward);
    
    UFUNCTION(BlueprintCallable)
    void SetCarPartRewards(TArray<FCarPartReward> InCarPartRewards);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleCheckingForStuck();
    
    UFUNCTION(BlueprintCallable)
    bool RevealDeliveryCarPart(EJunkyardCarPartType CarPartType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRewardCarName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCustomizableWreckChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AJunkyardCarWreck> GetCarWreckRewardSoftClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCarPartReward> GetCarPartRewards();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckForContractStuck();
    
};

