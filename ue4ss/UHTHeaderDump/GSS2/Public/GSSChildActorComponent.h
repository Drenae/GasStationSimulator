#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "GSSChildActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UGSSChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UGSSChildActorComponent(const FObjectInitializer& ObjectInitializer);

};

