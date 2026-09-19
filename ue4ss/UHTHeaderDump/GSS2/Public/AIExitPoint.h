#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AIExitPoint.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAIExitPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Home;
    
    AAIExitPoint(const FObjectInitializer& ObjectInitializer);

};

