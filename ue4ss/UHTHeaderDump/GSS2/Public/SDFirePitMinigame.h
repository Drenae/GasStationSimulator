#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ESDFirePitMeatStatus.h"
#include "SDFirePitMeatStatusDelegateDelegate.h"
#include "SDMinigameBase.h"
#include "SDMinigameGeneralDelegateDelegate.h"
#include "SDFirePitMinigame.generated.h"

class AActor;
class ASDMeatBagProduct;
class UBoxComponent;
class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GSS2_API ASDFirePitMinigame : public ASDMinigameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* PlacedMeatInstancedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MeatBagPlaceAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MeatBagPlaceTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFirePitMeatStatusDelegate MeatStatusChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameGeneralDelegate MeatBagPlacedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeatCookingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeatBurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MeatStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> RawMeatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CookedMeatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BurntMeatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MeatCook_TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MeatBurn_TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDMeatBagProduct* PlacedMeatBag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFirePitMeatStatus MeatStatus;
    
public:
    ASDFirePitMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryPlaceMeat();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMeat();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStaticMeshLoaded(TSoftObjectPtr<UStaticMesh> Mesh);
    
    UFUNCTION(BlueprintCallable)
    void OnMeatTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeatCooked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeatBurned();
    
    UFUNCTION(BlueprintCallable)
    void OnMaterialLoaded(TSoftObjectPtr<UMaterialInterface> InMaterial);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeatPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeatBagPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDMeatBagProduct* GetPlacedMeatBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFirePitMeatStatus GetMeatStatus() const;
    
};

