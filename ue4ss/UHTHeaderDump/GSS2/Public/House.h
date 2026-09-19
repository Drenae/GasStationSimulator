#pragma once
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "House.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API AHouse : public AInteractableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AHouse(const FObjectInitializer& ObjectInitializer);

};

