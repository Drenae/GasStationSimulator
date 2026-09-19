#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PopularityRewardData.generated.h"

class UEventDisplay;

USTRUCT(BlueprintType)
struct FPopularityRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventDisplay> EventToDisplay;
    
    GSS2_API FPopularityRewardData();
};

