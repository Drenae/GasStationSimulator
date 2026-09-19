#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorWithBuilding.generated.h"

class AActor;
class AInteractableBuilding;

USTRUCT(BlueprintType)
struct FActorWithBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInteractableBuilding>> ClassFilter;
    
    GSS2_API FActorWithBuilding();
};

