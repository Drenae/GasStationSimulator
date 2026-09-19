#pragma once
#include "CoreMinimal.h"
#include "NodeStruct.generated.h"

class APathPoint;

USTRUCT(BlueprintType)
struct FNodeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathPoint* NodePathPoint;
    
    GSS2_API FNodeStruct();
};

