#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "TrashDestroyDelegate.h"
#include "BigTrashBag.generated.h"

class AProduct;

UCLASS(Blueprintable)
class GSS2_API ABigTrashBag : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrashCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrashBagCapacity;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrashDestroy OnTrashDestroyed;
    
    ABigTrashBag(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float RefreshMesh();
    
    UFUNCTION(BlueprintCallable)
    bool AddNewTrash(AProduct* Product, float& NewCapacity, bool& SpawnedTrash);
    
};

