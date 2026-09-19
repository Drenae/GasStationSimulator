#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomerShopTask.generated.h"

class UTaskBase;

USTRUCT(BlueprintType)
struct GSS2_API FCustomerShopTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTaskBase> TaskReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageChance;
    
    FCustomerShopTask();
};

