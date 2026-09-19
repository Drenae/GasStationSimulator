#pragma once
#include "CoreMinimal.h"
#include "EIceCreamConeSize.h"
#include "SoldIceCreamFlavour.h"
#include "SoldIceCreams.generated.h"

USTRUCT(BlueprintType)
struct FSoldIceCreams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamConeSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoldIceCreamFlavour> SoldScoops;
    
    GSS2_API FSoldIceCreams();
};

