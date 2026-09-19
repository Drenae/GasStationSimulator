#pragma once
#include "CoreMinimal.h"
#include "ERVGuestType.h"
#include "RvCustomerCampSpotPair.h"
#include "RvFestivalSummaryData.h"
#include "RvOvernightSummaryData.h"
#include "RvStopoverSummaryData.h"
#include "RvSummaryData.generated.h"

USTRUCT(BlueprintType)
struct FRvSummaryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVGuestType SummaryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRvCustomerCampSpotPair> Guests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvStopoverSummaryData StopoverSummaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvOvernightSummaryData OvernightSummaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvFestivalSummaryData FestivalSummaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BruttoMoneyIncome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RubyTax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NettoMoneyIncome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTrustIncome;
    
    GSS2_API FRvSummaryData();
};

