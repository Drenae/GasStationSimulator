#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FuelPistolBase.generated.h"

class AFuelEnter;
class AFuelStation;
class APawn;

UCLASS(Blueprintable)
class GSS2_API AFuelPistolBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFuelEnter* CurrentylUsedFuelEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PistolUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingPosition;
    
    AFuelPistolBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMiniGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMiniGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PutDownPistol(AFuelStation* FuelStationRef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PistolUse(AActor* Target, AActor* UseInstigator, AFuelEnter* FuelEnter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LimpEvent();
    
};

