#pragma once
#include "CoreMinimal.h"
#include "EJoeOrderType.h"
#include "JoeOrderInfo.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FJoeOrderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoeOrderType OrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> RequiredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAmount;
    
    GSS2_API FJoeOrderInfo();
};

