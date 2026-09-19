#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "JunkyardEventSubsystem.generated.h"

UCLASS(Blueprintable)
class GSS2_API UJunkyardEventSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UJunkyardEventSubsystem();

};

