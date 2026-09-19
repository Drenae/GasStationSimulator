#pragma once
#include "CoreMinimal.h"
#include "ItemRange.h"
#include "Cargo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCargo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemRange> CountrySpecific;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemRange> PlaneExclusives;
    
    FCargo();
};

