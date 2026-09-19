#pragma once
#include "CoreMinimal.h"
#include "EIceCreamFlavours.h"
#include "SavedIceCreamContainer.generated.h"

USTRUCT(BlueprintType)
struct FSavedIceCreamContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamFlavours Flavour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountLeft;
    
    GSS2_API FSavedIceCreamContainer();
};

