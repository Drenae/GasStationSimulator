#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "JunkyardCarPartTypeArray.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FJunkyardCarPartTypeArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJunkyardCarPartType> CarPartTypes;
    
    FJunkyardCarPartTypeArray();
};

