#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=BoneSocketTarget -FallbackName=BoneSocketTarget
#include "DragonData_StickySocketStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_StickySocketStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneSocketTarget> sticky_socket_array;
    
    DRAGONIKPLUGIN_API FDragonData_StickySocketStruct();
};

