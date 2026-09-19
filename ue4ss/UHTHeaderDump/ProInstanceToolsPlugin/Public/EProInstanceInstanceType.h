#pragma once
#include "CoreMinimal.h"
#include "EProInstanceInstanceType.generated.h"

UENUM(BlueprintType)
enum EProInstanceInstanceType {
    InstanceType_StaticMesh,
    InstanceType_ISM,
    InstanceType_HISM,
    InstanceType_ActorClass,
};

