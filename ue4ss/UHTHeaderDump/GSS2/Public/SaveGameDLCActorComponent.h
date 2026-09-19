#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SaveGameDLCActorComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameDLCActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USaveGameDLCActorComponent(const FObjectInitializer& ObjectInitializer);

};

