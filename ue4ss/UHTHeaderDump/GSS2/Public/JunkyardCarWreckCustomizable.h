#pragma once
#include "CoreMinimal.h"
#include "CarPaintData.h"
#include "ECustomizationPaintType.h"
#include "EJunkyardCarPartType.h"
#include "JunkyardCarWreck.h"
#include "OnDecalEffectStartedDelegate.h"
#include "OnPaintEffectStartedDelegate.h"
#include "OnPartEffectStartedDelegate.h"
#include "OnPartRemovingStartedDelegate.h"
#include "OnProjectFinishedDelegate.h"
#include "SavedCarPaint.h"
#include "SavedCarPaintData.h"
#include "StorageCarPart.h"
#include "JunkyardCarWreckCustomizable.generated.h"

class ACarWreckTooltip;
class ADecalToPaint;
class UJunkyardCarPartCustomizable;
class UPrimitiveComponent;
class URenderTargetComponent;
class UStaticMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class GSS2_API AJunkyardCarWreckCustomizable : public AJunkyardCarWreck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RightDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LeftDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrontBumper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RearBumper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* hood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderTargetComponent* MainMeshRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssemblyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectCreatedEffectShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectFinishedEffectShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEffectOnProjectFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADecalToPaint*> SpawnedDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FCarPaintData> WreckPaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationPaintType, UTexture*> MaterialsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreckTooltip* WreckTooltip;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectFinished OnProjectFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartEffectStarted OnPartEffectStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPaintEffectStarted OnPaintEffectStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecalEffectStarted OnDecalEffectStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartRemovingStarted OnPartRemovingStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPutOnSale;
    
public:
    AJunkyardCarWreckCustomizable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSeanClearingRust();
    
    UFUNCTION(BlueprintCallable)
    void ShowGhostParts(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPutOnSale(bool InIsPutOnSale);
    
    UFUNCTION(BlueprintCallable)
    void PreviewPlannedPaint(bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void OnRustCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaskInteraction(bool bEnd);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMaskInteracted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPaint() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleFInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRustProgressPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectProgress() const;
    
    UFUNCTION(BlueprintCallable)
    ADecalToPaint* GetLastPlacedDecal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPutOnSale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UJunkyardCarPartCustomizable*> GetAllPlannedParts() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRepaintForBody();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishClearingRust();
    
    UFUNCTION(BlueprintCallable)
    void DebugCleanEverything();
    
    UFUNCTION(BlueprintCallable)
    void ChangePlannedPaintTypeForPart(EJunkyardCarPartType Slot, FSavedCarPaint CarPaintData);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlannedPaintTypeForBody(FSavedCarPaint CarPaintData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelRustClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBodyEffectsOverTime(bool bRepaint, bool bApplyingPaint);
    
    UFUNCTION(BlueprintCallable)
    void AddAndSetupPartToSlot(EJunkyardCarPartType Slot, FStorageCarPart PartStruct, bool bGhost, bool bSetup, bool bPaint, FSavedCarPaintData CarPaint, TArray<ADecalToPaint*> Decals);
    
};

