#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "HappyAngryThreshold.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FHappyAngryThreshold : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HappyThreshold;
    
    FHappyAngryThreshold();
};

