#pragma once
#include "CoreMinimal.h"
#include "MagnetForce.h"
#include "TrashItemBase.h"
#include "CarWreckTrash.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWreckTrash : public ATrashItemBase, public IMagnetForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TowySnapBox;
    
    ACarWreckTrash(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldActorRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEventOnDeattached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectDeattachedFromMagnet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPrimitiveToApplyFore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetAttractedPrimitive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMagnetActivatePhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorGetAttracted();
    

    // Fix for true pure virtual functions not being implemented
};

