#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "CarWrecksTierModels.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarWrecksTierModels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity Tier;
    
    FCarWrecksTierModels();
};

