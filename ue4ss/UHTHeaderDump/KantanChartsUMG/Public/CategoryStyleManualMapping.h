#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=KantanCategoryStyle -FallbackName=KantanCategoryStyle
#include "CategoryStyleManualMapping.generated.h"

USTRUCT(BlueprintType)
struct FCategoryStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCategoryStyle Style;
    
    KANTANCHARTSUMG_API FCategoryStyleManualMapping();
};

