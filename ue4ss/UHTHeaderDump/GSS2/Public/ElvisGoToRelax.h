#pragma once
#include "CoreMinimal.h"
#include "IteractableActorTask.h"
#include "ElvisGoToRelax.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UElvisGoToRelax : public UIteractableActorTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorLocation;
    
    UElvisGoToRelax();

};

