#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECustomizationPaintType.h"
#include "EDecalColor.h"
#include "EDecalSprayingState.h"
#include "EJunkyardDecalPossibility.h"
#include "PaintGunDroppedDelegate.h"
#include "PaintGunPickedUpDelegate.h"
#include "JunkyardPaintGun.generated.h"

class ADecalToPaint;
class APaintGunStation;
class APawn;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AJunkyardPaintGun : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPaintGunPickedUp OnPaintGunPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPaintGunDropped OnPaintGunDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeFromStationBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeFromHolderBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerHandlePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APaintGunStation> OwningStation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> HeldByPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecalSprayingState DecalSprayingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DMIDecalTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecalToPaint* PreviewDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecalToPaint* SpawnedDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetedDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecalToPaint* GotLastDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADecalToPaint> DecalsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DecalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WallLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DecalsHolderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DecalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AllowedInteractableClassTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitWallLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecalAmountLimit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastDistanceCheck;
    
public:
    AJunkyardPaintGun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UptadePreviewDecalType(TSoftClassPtr<ADecalToPaint> PickedDecal, const FString& NewDecalText, ECustomizationPaintType PaintType);
    
    UFUNCTION(BlueprintCallable)
    EDecalSprayingState SetNewDecalSprayingState(EDecalSprayingState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void RPM();
    
    UFUNCTION(BlueprintCallable)
    void RotateItemUp(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void RotateItemRight(float AxisValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCarPainting();
    
public:
    UFUNCTION(BlueprintCallable)
    void PreviewTargets();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PaintingDecal(FTransform SpawningDecalTransform, bool bIsSpawned);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPutDown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewTargets();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPickUp(APawn* PickedUpPawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecalSpawn(AActor* OnSpawnedDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecalDestroy(AActor* OnDestroyedDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaxDecals(int32 NumberOfDecals);
    
public:
    UFUNCTION(BlueprintCallable)
    void LPM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPickedUp();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckDistanceFromStation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BringInfoBack(EDecalColor DecalType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlockJunkyardDecal(EJunkyardDecalPossibility DecalPossibility);
    
};

