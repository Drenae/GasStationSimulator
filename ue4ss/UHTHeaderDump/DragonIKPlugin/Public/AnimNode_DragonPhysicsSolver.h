#pragma once
#include "CoreMinimal.h"
#include "AnimNode_DragonControlBase.h"
#include "AnimNode_DragonPhysicsSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonPhysicsSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    FAnimNode_DragonPhysicsSolver();
};

