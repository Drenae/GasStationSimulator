#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CarWashTrashSpawnLocation.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWashTrashSpawnLocation : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
public:
    ACarWashTrashSpawnLocation(const FObjectInitializer& ObjectInitializer);

};

