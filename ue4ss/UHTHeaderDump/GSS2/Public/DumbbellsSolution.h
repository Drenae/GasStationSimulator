#pragma once
#include "CoreMinimal.h"
#include "DumbbellSetup.h"
#include "DumbbellsSolution.generated.h"

USTRUCT(BlueprintType)
struct FDumbbellsSolution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDumbbellSetup> Setups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissingWeight;
    
    GSS2_API FDumbbellsSolution();
};

