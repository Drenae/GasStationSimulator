#pragma once
#include "CoreMinimal.h"
#include "PlayerListOfOrdersM.h"
#include "AllPlayerOrders.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FAllPlayerOrders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerListOfOrdersM> ProductsOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerListOfOrdersM> CarPartsOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerListOfOrdersM> IceCreamOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerListOfOrdersM PreviousProductsOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerListOfOrdersM PreviousCarPartsOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerListOfOrdersM PreviousIceCreamsOrders;
    
    FAllPlayerOrders();
};

