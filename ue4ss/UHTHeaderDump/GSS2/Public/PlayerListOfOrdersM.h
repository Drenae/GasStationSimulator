#pragma once
#include "CoreMinimal.h"
#include "EOrdersType.h"
#include "PreviousOrderM.h"
#include "PlayerListOfOrdersM.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FPlayerListOfOrdersM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrdersType OrderListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviousOrderM> PreviousOrderList;
    
    FPlayerListOfOrdersM();
};

