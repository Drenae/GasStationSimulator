#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "TrashBin.generated.h"

class AProduct;

UCLASS(Blueprintable)
class GSS2_API ATrashBin : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingleTrashMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullTrashBin;
    
    ATrashBin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateTrashBinCapacity(float TrashCapacity, float& TrashBinCapacityInPercent, bool IgnoreLimit);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThrowDistance(AProduct* Product);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrashBinCapacityUpdated(const float TrashCapacity, float TrashBinCapacityInPercent);
    
    UFUNCTION(BlueprintCallable)
    void EmptyTrash();
    
};

