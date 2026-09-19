#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnWaterVehicleArrivedSignatureDelegate.h"
#include "OnWaterVehicleGotHomeDelegate.h"
#include "WaterMovementPoint.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class GSS2_API AWaterMovementPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterVehicleArrivedSignature OnWaterVehicleArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterVehicleGotHome OnWaterVehicleGotHome;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFuelStationStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractableActor;
    
    AWaterMovementPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsReserved(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentVehicle(AActor* NewVehicle);
    
    UFUNCTION(BlueprintCallable)
    void Reserve(AActor* ReserverVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReserverDestroyed(AActor* ReserverVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReserved();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentVehicle();
    
    UFUNCTION(BlueprintCallable)
    void Free();
    
};

