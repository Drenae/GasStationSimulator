#pragma once
#include "CoreMinimal.h"
#include "MeshMaterialsStruct.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMeshMaterialsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSlot;
    
    GSS2_API FMeshMaterialsStruct();
};

