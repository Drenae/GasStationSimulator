#pragma once
#include "CoreMinimal.h"
#include "ECategoryFilter.h"
#include "DeliveryBoatToRespawn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GSS2_API FDeliveryBoatToRespawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BoatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryFilter DeliveryCategory;
    
    FDeliveryBoatToRespawn();
};

