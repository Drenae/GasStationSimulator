#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ToolDroppedDelegate.h"
#include "ToolPickedUpDelegate.h"
#include "PickableTool.generated.h"

class APawn;
class APickableToolStation;
class UArrowComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API APickableTool : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToolPickedUp OnToolPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToolDropped OnToolDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlayerHandlePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APickableToolStation> OwningStation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeFromStationBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> HeldByPawn;
    
public:
    APickableTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReattachToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPutDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickUp(APawn* PickedUpPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPickedUp();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckDistanceFromStation();
    
};

