#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PreviousOrderM.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FPreviousOrderM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ProductClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemAmmount;
    
    FPreviousOrderM();
};

