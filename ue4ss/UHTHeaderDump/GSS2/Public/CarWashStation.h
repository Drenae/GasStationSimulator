#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.h"
#include "InteractableBuilding.h"
#include "CarWashStation.generated.h"

class AGSSWheeledVehicle;
class UChildActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWashStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Pistol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WashedCarPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AutomaticWashParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CarWashIsAutomatic;
    
    ACarWashStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeverVisibilityStatus(int32 ActorLevel);
    
    UFUNCTION(BlueprintCallable)
    bool TurnIntoAutomaticCarWash(bool Automatic);
    
    UFUNCTION(BlueprintCallable)
    void StartNonAutomaticWashing();
    
    UFUNCTION(BlueprintCallable)
    void StartAutomaticWashing();
    
    UFUNCTION(BlueprintCallable)
    void PutOutCar(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable)
    void PutInCar(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable)
    bool GetCarWashIsAutomatic();
    
    UFUNCTION(BlueprintCallable)
    void FinishCarWashGame(ETaskResult TaskState);
    
};

