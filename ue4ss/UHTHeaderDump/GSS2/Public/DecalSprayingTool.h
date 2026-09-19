#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECustomizationPaintType.h"
#include "EDecalColor.h"
#include "EDecalSprayingState.h"
#include "EJunkyardDecalPossibility.h"
#include "KeyItem.h"
#include "DecalSprayingTool.generated.h"

class AActor;
class ADecalToPaint;
class UMaterialInstanceDynamic;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API ADecalSprayingTool : public AKeyItem {
    GENERATED_BODY()
public:
protected:
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
    int32 DecalAmountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitWallLocation;
    
public:
    ADecalSprayingTool(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UptadePreviewDecalType(TSoftClassPtr<ADecalToPaint> PickedDecal, const FString& NewDecalText, ECustomizationPaintType PaintType);
    
    UFUNCTION(BlueprintCallable)
    EDecalSprayingState SetNewDecalSprayingState(EDecalSprayingState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ResetCarPainting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PaintingDecal(FTransform SpawningDecalTransform, bool bIsSpawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecalSpawn(AActor* OnSpawnedDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecalDestroy(AActor* OnDestroyedDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInventoryUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInventoryDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaxDecals(int32 NumberOfDecals);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BringInfoBack(EDecalColor DecalType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlockJunkyardDecal(EJunkyardDecalPossibility DecalPossibility);
    
};

