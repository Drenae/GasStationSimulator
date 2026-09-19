#pragma once
#include "CoreMinimal.h"
#include "ContainerTrash.h"
#include "CountableObjectiveBase.h"
#include "ThrowBigTrashObjective.generated.h"

class AActor;
class AItem;
class ATrashBin;

UCLASS(Blueprintable)
class GSS2_API UThrowBigTrashObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountOnlyAirStripTrashAndContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountTrashPickedUpWithTrashBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalTrashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrashSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTrashSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrashCollisionProfile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContainerTrash> Containers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedTrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingProgress;
    
public:
    UThrowBigTrashObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTrashContainerTrashAmountChanged(ATrashBin* TrashBin, TArray<AActor*> CurrentTrashInside, AItem* TrashItem, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

