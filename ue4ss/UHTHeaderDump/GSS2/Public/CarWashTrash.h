#pragma once
#include "CoreMinimal.h"
#include "TrashItemBase.h"
#include "CarWashTrash.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACarWashTrash : public ATrashItemBase {
    GENERATED_BODY()
public:
    ACarWashTrash(const FObjectInitializer& ObjectInitializer);

};

