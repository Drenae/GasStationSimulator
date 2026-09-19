#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "OnEmptyPopcornMachineDelegate.h"
#include "OnPopcornGeneratedDelegate.h"
#include "OnPopcornMachineCapacityUpdateDelegate.h"
#include "OnPopcornMachineStateChangedDelegate.h"
#include "OnPopcornMachineTimeUpdateDelegate.h"
#include "ePopcornMachineState.h"
#include "PopcornMachine.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class GSS2_API APopcornMachine : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ePopcornMachineState MachineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PopcornMaterial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornMachineTimeUpdate OnTimeUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornMachineCapacityUpdate OnCapacityUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornGenerated OnPopcornGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornMachineStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmptyPopcornMachine OnEmptyMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualProductionTime;
    
    APopcornMachine(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateProductionTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartProductionAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartProduction(bool bAfterGameLoading);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineState(ePopcornMachineState NewMachineState);
    
    UFUNCTION(BlueprintCallable)
    void PopcornDeliveredActions(AActor* PopcornBox, AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishProductionAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckForPopcornSpawn();
    
    UFUNCTION(BlueprintCallable)
    void CheckForEmptyMachine();
    
};

