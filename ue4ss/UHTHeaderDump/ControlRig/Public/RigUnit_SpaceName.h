#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_SpaceName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SpaceName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SPACE;
    
    CONTROLRIG_API FRigUnit_SpaceName();
};

