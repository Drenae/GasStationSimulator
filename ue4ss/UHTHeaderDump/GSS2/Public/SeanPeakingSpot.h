#pragma once
#include "CoreMinimal.h"
#include "SeanInteractionItem.h"
#include "SeanPeakingSpot.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASeanPeakingSpot : public ASeanInteractionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPeakLeft;
    
    ASeanPeakingSpot(const FObjectInitializer& ObjectInitializer);

};

