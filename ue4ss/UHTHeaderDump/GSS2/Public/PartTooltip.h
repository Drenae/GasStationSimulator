#pragma once
#include "CoreMinimal.h"
#include "PartTooltip.generated.h"

class ACarPart_Tooltip;
class UJunkyardCarPartBase;

USTRUCT(BlueprintType)
struct GSS2_API FPartTooltip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarPart_Tooltip* PartInfoRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJunkyardCarPartBase* CarPartOwner;
    
    FPartTooltip();
};

