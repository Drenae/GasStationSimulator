#pragma once
#include "CoreMinimal.h"
#include "ContractBase.h"
#include "EJunkyardPartRarity.h"
#include "HireableDriver.h"
#include "BasicContract.generated.h"

UCLASS(Blueprintable)
class GSS2_API UBasicContract : public UContractBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHireableDriver HiredDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity ContractTier;
    
public:
    UBasicContract();

    UFUNCTION(BlueprintCallable)
    void SetOriginBonus(float InOriginBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetHiredDriver(FHireableDriver InHiredDriver);
    
    UFUNCTION(BlueprintCallable)
    void SetContractTier(EJunkyardPartRarity InContractTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOriginBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHireableDriver GetHiredDriver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJunkyardPartRarity GetContractTier();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckIfEnoughSpaceForReward();
    
    UFUNCTION(BlueprintCallable)
    void AddRewards();
    
};

