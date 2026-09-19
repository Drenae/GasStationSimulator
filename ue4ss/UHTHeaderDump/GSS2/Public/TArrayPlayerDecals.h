#pragma once
#include "CoreMinimal.h"
#include "TArrayPlayerDecals.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTArrayPlayerDecals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlreadyExistingPlayerDecalsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedPlayerDecalsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerDecals;
    
    GSS2_API FTArrayPlayerDecals();
};

