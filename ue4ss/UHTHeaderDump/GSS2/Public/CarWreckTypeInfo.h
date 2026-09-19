#pragma once
#include "CoreMinimal.h"
#include "CarWreckType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "CarWreckTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarWreckTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType CarWreckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarWreckType CarWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJunkyardPartRarity> Tiers;
    
    FCarWreckTypeInfo();
};

