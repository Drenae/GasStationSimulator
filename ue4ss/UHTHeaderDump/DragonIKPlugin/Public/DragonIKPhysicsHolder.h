#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DragonIKPhysicsHolder.generated.h"

UCLASS(Blueprintable)
class DRAGONIKPLUGIN_API ADragonIKPhysicsHolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* connected_actor;
    
    ADragonIKPhysicsHolder(const FObjectInitializer& ObjectInitializer);

};

