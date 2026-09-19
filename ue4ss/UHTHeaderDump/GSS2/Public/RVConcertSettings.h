#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ConcertDetails.h"
#include "RVConcertSettings.generated.h"

class UObject;

UCLASS(Blueprintable)
class GSS2_API URVConcertSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FConcertDetails> ConcertTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyGain[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 TrustPointsGain[9];
    
    URVConcertSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsConcertAvailable(UObject* WorldContextObject, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetConcertTypesUnlockedAtLevel(int32 ConcertLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FGameplayTag> GetAvailableConcertTypes(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfTrustPointsGained(int32 AmountOfCustomers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmountOfCashToGain(int32 AmountOfCustomers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllConcertTypes();
    
};

