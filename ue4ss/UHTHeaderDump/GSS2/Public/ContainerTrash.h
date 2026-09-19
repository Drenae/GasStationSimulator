#pragma once
#include "CoreMinimal.h"
#include "ContainerTrash.generated.h"

class ATrashBin;

USTRUCT(BlueprintType)
struct FContainerTrash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATrashBin* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrashAmount;
    
    GSS2_API FContainerTrash();
};

