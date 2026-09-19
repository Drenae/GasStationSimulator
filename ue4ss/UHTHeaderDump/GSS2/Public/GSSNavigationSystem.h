#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "GSSNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSS2_API UGSSNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UGSSNavigationSystem();

};

