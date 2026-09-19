#pragma once
#include "CoreMinimal.h"
#include "RvCustomerCampSpotPair.generated.h"

class ARVCampSpot;
class URVCustomerData;

USTRUCT(BlueprintType)
struct FRvCustomerCampSpotPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVCustomerData* CustomerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampSpot* CampSpot;
    
    GSS2_API FRvCustomerCampSpotPair();
};

