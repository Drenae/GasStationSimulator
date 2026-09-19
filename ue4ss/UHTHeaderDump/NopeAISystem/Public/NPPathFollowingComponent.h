#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "NPPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NOPEAISYSTEM_API UNPPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UNPPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

