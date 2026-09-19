#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EJunkyardCarPartType.h"
#include "MultitoolDroppedDelegate.h"
#include "MultitoolPickedUpDelegate.h"
#include "JunkyardMultitool.generated.h"

class AJunkyardCarWreckCustomizable;
class AJunkyardMultitoolStation;
class APawn;
class UArrowComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardMultitool : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultitoolPickedUp OnMultiToolPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultitoolDropped OnMultitoolDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlayerHandlePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AJunkyardMultitoolStation> OwningStation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeFromStationBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> HeldByPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreckCustomizable* LastTargetedWreck;
    
public:
    AJunkyardMultitool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReattachToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrimaryAction(EJunkyardCarPartType TargetType, AJunkyardCarWreckCustomizable* TargetWreck, bool bAddingPart);
    
    UFUNCTION(BlueprintCallable)
    void OnPutDown();
    
    UFUNCTION(BlueprintCallable)
    void OnPickUp(APawn* PickedUpPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPickedUp();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckDistanceFromStation();
    
};

