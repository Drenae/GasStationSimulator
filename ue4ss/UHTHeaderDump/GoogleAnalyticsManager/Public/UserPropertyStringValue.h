#pragma once
#include "CoreMinimal.h"
#include "UserPropertyStringValue.generated.h"

USTRUCT(BlueprintType)
struct GOOGLEANALYTICSMANAGER_API FUserPropertyStringValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FUserPropertyStringValue();
};

