#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "CarLift.generated.h"

class ACharacter;
class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API ACarLift : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLiftedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TimesPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockedLiftedDown;
    
    ACarLift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCarLift(ACharacter* Instaginator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PutOutCar(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PutInCar(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMiniGameTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void FinishCarLiftGame();
    
};

