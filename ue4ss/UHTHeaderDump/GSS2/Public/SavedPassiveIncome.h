#pragma once
#include "CoreMinimal.h"
#include "SavedPassiveIncome.generated.h"

USTRUCT(BlueprintType)
struct FSavedPassiveIncome {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> MoneyFromOtherLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayNumber;
    
    GSS2_API FSavedPassiveIncome();
};

