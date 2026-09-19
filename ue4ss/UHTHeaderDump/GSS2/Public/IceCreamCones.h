#pragma once
#include "CoreMinimal.h"
#include "IceCreamCones.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FIceCreamCones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ConeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ConeContainerMeshes;
    
    GSS2_API FIceCreamCones();
};

