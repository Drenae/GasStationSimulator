#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RestockProductData.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FRestockProductData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> Product;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductRestockThreshold;
    
    FRestockProductData();
};

