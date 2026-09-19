#pragma once
#include "CoreMinimal.h"
#include "BakedFloatCustomAttribute.h"
#include "BakedIntegerCustomAttribute.h"
#include "BakedStringCustomAttribute.h"
#include "BakedCustomAttributePerBoneData.generated.h"

USTRUCT(BlueprintType)
struct FBakedCustomAttributePerBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneTreeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBakedStringCustomAttribute> StringAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBakedIntegerCustomAttribute> IntAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBakedFloatCustomAttribute> FloatAttributes;
    
    ENGINE_API FBakedCustomAttributePerBoneData();
};

