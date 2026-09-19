#pragma once
#include "CoreMinimal.h"
#include "EGSS_Stat.h"
#include "GSSStatHolder.generated.h"

USTRUCT(BlueprintType)
struct FGSSStatHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSS_Stat StatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    GSS2_API FGSSStatHolder();
};

