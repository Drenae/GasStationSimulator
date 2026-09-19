#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "OtherProduct.generated.h"

UCLASS(Blueprintable)
class GSS2_API AOtherProduct : public AProduct {
    GENERATED_BODY()
public:
    AOtherProduct(const FObjectInitializer& ObjectInitializer);

};

