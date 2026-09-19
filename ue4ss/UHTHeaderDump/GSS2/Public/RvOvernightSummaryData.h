#pragma once
#include "CoreMinimal.h"
#include "RvOvernightSummaryData.generated.h"

USTRUCT(BlueprintType)
struct FRvOvernightSummaryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> GuestCountPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyIncome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrustIncome;
    
    GSS2_API FRvOvernightSummaryData();
};

