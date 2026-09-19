#pragma once
#include "CoreMinimal.h"
#include "EIceCreamFlavours.h"
#include "LoadedContainersInfo.generated.h"

USTRUCT(BlueprintType)
struct FLoadedContainersInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIceCreamFlavours Flavour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountLeft;
    
    GSS2_API FLoadedContainersInfo();
};

