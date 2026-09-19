#pragma once
#include "CoreMinimal.h"
#include "UserPropertyIntValue.generated.h"

USTRUCT(BlueprintType)
struct GOOGLEANALYTICSMANAGER_API FUserPropertyIntValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FUserPropertyIntValue();
};

