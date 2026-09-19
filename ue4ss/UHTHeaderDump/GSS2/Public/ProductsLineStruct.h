#pragma once
#include "CoreMinimal.h"
#include "ProductsLineStruct.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct GSS2_API FProductsLineStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReservedDistance;
    
    FProductsLineStruct();
};

