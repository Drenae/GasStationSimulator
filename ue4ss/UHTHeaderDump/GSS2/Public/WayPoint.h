#pragma once
#include "CoreMinimal.h"
#include "WayPoint.generated.h"

class AAICharacterBase;
class UArrowComponent;

USTRUCT(BlueprintType)
struct GSS2_API FWayPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* AICharacterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    FWayPoint();
};

