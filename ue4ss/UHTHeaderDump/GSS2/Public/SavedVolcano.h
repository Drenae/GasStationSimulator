#pragma once
#include "CoreMinimal.h"
#include "EChunchumanchuAnger.h"
#include "SavedVolcano.generated.h"

USTRUCT(BlueprintType)
struct FSavedVolcano {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChunchumanchuAnger Anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bErupting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EruptionTime;
    
    GSS2_API FSavedVolcano();
};

