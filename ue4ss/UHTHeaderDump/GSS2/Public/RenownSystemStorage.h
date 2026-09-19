#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RenownSystemStorage.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARenownSystemStorage : public AActor {
    GENERATED_BODY()
public:
    ARenownSystemStorage(const FObjectInitializer& ObjectInitializer);

};

