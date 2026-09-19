#pragma once
#include "CoreMinimal.h"
#include "IceCreamOrders.h"
#include "IteractableActorTask.h"
#include "BuyIceCream.generated.h"

UCLASS(Blueprintable)
class GSS2_API UBuyIceCream : public UIteractableActorTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIceCreamOrders> OrderList;
    
    UBuyIceCream();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentOrder();
    
};

