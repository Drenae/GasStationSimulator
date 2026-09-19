#pragma once
#include "CoreMinimal.h"
#include "SavedRVCustomerData.h"
#include "SavedRVCampSpot.generated.h"

class ARVCampSpot;

USTRUCT(BlueprintType)
struct FSavedRVCampSpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVCampSpot> CampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedRVCustomerData> BookedCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomName;
    
    GSS2_API FSavedRVCampSpot();
};

