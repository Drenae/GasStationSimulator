#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PopularityRewardData.h"
#include "PopularityRewardsDataAsset.generated.h"

UCLASS(Blueprintable)
class GSS2_API UPopularityRewardsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPopularityRewardData> RewardPerLevel;
    
    UPopularityRewardsDataAsset();

};

