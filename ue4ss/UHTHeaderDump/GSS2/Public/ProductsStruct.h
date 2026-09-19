#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProductsStruct.generated.h"

class AItem;
class UHierarchicalInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct GSS2_API FProductsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* InstancedStaticMeshComponent;
    
    FProductsStruct();
};

