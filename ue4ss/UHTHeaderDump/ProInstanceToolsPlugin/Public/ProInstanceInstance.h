#pragma once
#include "CoreMinimal.h"
#include "ProInstanceInstanceSettings.h"
#include "Templates/SubclassOf.h"
#include "ProInstanceInstance.generated.h"

class AActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FProInstanceInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProInstanceInstanceSettings InstanceSettings;
    
    PROINSTANCETOOLSPLUGIN_API FProInstanceInstance();
};

