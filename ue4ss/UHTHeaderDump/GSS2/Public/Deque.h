#pragma once
#include "CoreMinimal.h"
#include "Deque.generated.h"

USTRUCT(BlueprintType)
struct FDeque {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Items;
    
    GSS2_API FDeque();
};

