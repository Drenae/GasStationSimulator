#pragma once
#include "CoreMinimal.h"
#include "EJunkyardPartRarity.h"
#include "StateSettings.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FStateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardPartRarity, float> WrecksTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardPartRarity, float> NonGaragePartsTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardPartRarity, float> GaragePartsTiers;
    
    FStateSettings();
};

