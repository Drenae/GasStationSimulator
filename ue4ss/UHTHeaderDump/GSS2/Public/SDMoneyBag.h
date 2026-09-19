#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "SDMoneyBag.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASDMoneyBag : public AProduct {
    GENERATED_BODY()
public:
    ASDMoneyBag(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

