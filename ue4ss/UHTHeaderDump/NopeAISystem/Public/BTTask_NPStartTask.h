#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_NPStartTask.generated.h"

UCLASS(Blueprintable)
class NOPEAISYSTEM_API UBTTask_NPStartTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_NPStartTask();

};

