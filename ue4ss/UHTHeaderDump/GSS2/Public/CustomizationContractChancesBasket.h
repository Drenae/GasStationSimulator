#pragma once
#include "CoreMinimal.h"
#include "CustomizationContractChancesBasket.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCustomizationContractChancesBasket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OfficeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Chances;
    
    FCustomizationContractChancesBasket();
};

