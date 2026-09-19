#pragma once
#include "CoreMinimal.h"
#include "CustomAttribute.h"
#include "CustomAttributePerBoneData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCustomAttributePerBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneTreeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomAttribute> Attributes;
    
    FCustomAttributePerBoneData();
};

