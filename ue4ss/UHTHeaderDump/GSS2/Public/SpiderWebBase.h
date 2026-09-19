#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpiderWebBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASpiderWebBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitsToDestroy;
    
    ASpiderWebBase(const FObjectInitializer& ObjectInitializer);

};

