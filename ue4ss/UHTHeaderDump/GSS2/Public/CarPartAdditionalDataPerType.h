#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CarPartAdditionalDataPerType.generated.h"

class UJunkyardCarPartBase;

USTRUCT(BlueprintType)
struct GSS2_API FCarPartAdditionalDataPerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UJunkyardCarPartBase>> SecondaryCarPartsToSpawn;
    
    FCarPartAdditionalDataPerType();
};

