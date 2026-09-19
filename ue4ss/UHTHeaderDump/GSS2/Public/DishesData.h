#pragma once
#include "CoreMinimal.h"
#include "EDishType.h"
#include "DishesData.generated.h"

class ADishItem;

USTRUCT(BlueprintType)
struct FDishesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDishType DishType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADishItem>> DishItemClasses;
    
    GSS2_API FDishesData();
};

