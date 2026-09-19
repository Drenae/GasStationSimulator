#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AiCharacterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UAiCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAiCharacterComponent(const FObjectInitializer& ObjectInitializer);

};

