#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "PortablePowerWashHolder.generated.h"

class APortableCarWashPistol;
class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API APortablePowerWashHolder : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PistolChildActorComponent;
    
public:
    APortablePowerWashHolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APortableCarWashPistol* GetPortableCarWashPistol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChildActorComponent* GetPistolChildActorComponent() const;
    
};

