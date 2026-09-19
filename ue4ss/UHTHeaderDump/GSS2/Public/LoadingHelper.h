#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LoadingHelper.generated.h"

UCLASS(Blueprintable)
class GSS2_API ALoadingHelper : public AActor {
    GENERATED_BODY()
public:
    ALoadingHelper(const FObjectInitializer& ObjectInitializer);

};

