#pragma once
#include "CoreMinimal.h"
#include "EBBQItemState.h"
#include "Templates/SubclassOf.h"
#include "BBQScore.generated.h"

class ABBQItem;

USTRUCT(BlueprintType)
struct FBBQScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABBQItem> BBQItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBBQItemState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    GSS2_API FBBQScore();
};

