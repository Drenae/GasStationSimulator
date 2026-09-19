#pragma once
#include "CoreMinimal.h"
#include "ECarPartStat.h"
#include "CarStatArray.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarStatArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECarPartStat> Stats;
    
    FCarStatArray();
};

