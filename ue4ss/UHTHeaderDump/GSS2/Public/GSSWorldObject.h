#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "GSSWorldObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API AGSSWorldObject : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ConnectedActors;
    
public:
    AGSSWorldObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetConnectedActor(int32 ActorIndex);
    
};

