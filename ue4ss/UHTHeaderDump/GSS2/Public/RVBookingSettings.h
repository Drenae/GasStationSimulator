#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ERVGuestType.h"
#include "RVConcertReward.h"
#include "RVGuestTypeProperties.h"
#include "RVSleepoverGuestData.h"
#include "RVBookingSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GSS2_API URVBookingSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GuestCampers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InterestedGuestsCountPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterestedGuestsRefreshTimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshCustomersCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DismissCustomersPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RubyTributePercentage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVGuestTypeProperties GuestTypeProperties[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullServiceMoneyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullServiceTrustPointsBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVSleepoverGuestData> OvernightGuestTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range MinMaxResourceRequiredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseConcertMoneyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVConcertReward> ConcertComboRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range ServiceCountRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range MusicLikesCountRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GuestNames;
    
    URVBookingSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxGuestCountLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxGuestCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRVGuestTypeProperties GetGuestTypeProperties(ERVGuestType GuestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGuestCountAtLevel(int32 Level);
    
};

