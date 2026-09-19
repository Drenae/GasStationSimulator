#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "AIBaseController.generated.h"

class AAICharacterBase;

UCLASS(Blueprintable)
class GSS2_API AAIBaseController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* AICharacterBase;
    
    AAIBaseController(const FObjectInitializer& ObjectInitializer);

};

