#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "TrashItemBase.generated.h"

class USphereComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GSS2_API ATrashItemBase : public AProduct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrashFinalProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactSoundTreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> TrashMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeingCleaned;
    
public:
    ATrashItemBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TrashMeshLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void TimedDestroyTrash(float DestroyDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetBeingCleaned(bool bNewCleaned);
    
    UFUNCTION(BlueprintCallable)
    void SendGoogleAnalyticsDataAboutTrashClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBeingCleaned();
    
};

