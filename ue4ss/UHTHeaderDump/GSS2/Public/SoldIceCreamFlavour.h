#pragma once
#include "CoreMinimal.h"
#include "EIceCreamFlavours.h"
#include "SoldIceCreamFlavour.generated.h"

USTRUCT(BlueprintType)
struct FSoldIceCreamFlavour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemClassString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamFlavours Flavour;
    
    GSS2_API FSoldIceCreamFlavour();
};

