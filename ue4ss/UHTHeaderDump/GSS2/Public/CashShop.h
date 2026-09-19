#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CashShopProduct.h"
#include "EProductCashShopState.h"
#include "ETaskResult.h"
#include "InteractableBuilding.h"
#include "SavedWayPoint.h"
#include "Templates/SubclassOf.h"
#include "CashShop.generated.h"

class AAICharacterBase;
class AActor;
class AAttachmentPoint;
class AGSSCharacterBase;
class AItem;
class AItemBox;
class AProduct;
class UArrowComponent;
class UAudioComponent;
class UBoxComponent;
class UCameraComponent;
class UConveyorBeltComponent;
class UConveyorBeltSpawnLocComp;
class UDataTable;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class USoundCue;
class UStaticMesh;
class UStaticMeshComponent;
class UTaskBase;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API ACashShop : public AInteractableBuilding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemDataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShelfMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemBox* CashBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScannerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AnimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpongeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ScannerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxAreaTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxAreaLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxAreaRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxAreaBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FailBoxAreaFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SuccessBoxArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NoShelfZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETaskResult CashTaskState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinigameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedProductIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAttachmentPoint* AttachmentPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBeltTimeToSpawnNextItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBeltTimeToSpawnNextItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurabilityLossMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleanSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadSphereTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCursorSpeedOnProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ScanningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ItemDropSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BeltStartRepeatSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BeltStopSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurBeltTimeToSpawnNextItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCashShopProduct> ProductsToScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCashShopProduct> ProductsOnBelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCashShopProduct> ProductsAlreadyScanned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConveyorBeltComponent* ConveyorBeltComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ScannerSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BeltAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ItemDropAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomerWaitingToBeServed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimerStarted;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UArrowComponent*> QueuePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> DefaultQueuePointsLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceBetweenQueuePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenQueuePoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ConveyorBeltMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ScannerMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDurabilityIsUnderCriticLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCashMeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentCashColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItem* ItemBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockCashWhenReachThisDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingRMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DefaultCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotatingRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotatingLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveVector_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltatimeAnimationClean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSponageMovment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurGamepadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurItemGamepadStartingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemGrabbedByPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxClenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpongeRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpongeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurSpongeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveForvard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StrikeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMinigameProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMinigameScannedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMinigameFailedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMinigameProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMinigameScannedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMinigameFailedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AverageTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 indexItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MinigameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MinigameWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ProductsInBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemsToScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemsToScanGamepadZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ItemsToScanGamepadStartingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProduct* TemporaryProductFile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GamepadMovementArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GamepadPointingOrigin;
    
public:
    ACashShop(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void VerifyItemsInBoxArea(UBoxComponent* Area, bool bSuccessArea);
    
    UFUNCTION(BlueprintCallable)
    void VerifyIfItemsInScannerArea();
    
    UFUNCTION(BlueprintCallable)
    void VerifyEndOfMinigame();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateStrike();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_UpdateStrike();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_UpdateProductCounters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_UpdateAverageTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ShowTutorial(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_SetShiftMessageVisible(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ScanSuccess(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ScanArrow(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_ProductFail(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_LeftNotification(bool bShow, int32 NumPeopleInQueue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UI_EndOfMinigameNotification(float MoneyEarned, bool bIsStrike, int32 TotalProducts, int32 SuccessProducts, float AverageTimePerProduct, float TipMoney);
    
    UFUNCTION(BlueprintCallable)
    void TurnCameraIfRequested(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    FHitResult TraceUniversal();
    
    UFUNCTION(BlueprintCallable)
    FHitResult TraceUnderMouseCursor();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnNewQueuePoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SpawnItemOnBelt(TSubclassOf<AItem> ProductClass, AGSSCharacterBase* CharOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowProducts(AAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    void SetStrikeCounter(int32 NewStrike);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviousMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMinigameActive(bool bNewActive);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetMeshWithMaterialsCleanup(UStaticMeshComponent* CashShopMeshComponent, UStaticMesh* InMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHoldingItem(bool bNewHoldingItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomerWaitingToBeServed(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMeshIndex(int32 InCurrentMeshIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMeshColor(FLinearColor InCurrentMeshColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCashMeshPreview(UStaticMesh* MeshToSet, int32 MeshLevel, FLinearColor Color);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectItem();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ScanProduct(AItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetScanner();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMinigameWidgetFromViewportAfterDelay();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromGroup(TSubclassOf<AItem> ProductClass, int32 Amount, EProductCashShopState GroupToRemoveFrom);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseItem_Gamepad(AProduct* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void PutProductByCustomer(AAICharacterBase* AICharacterBase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PointGamepadOriginToLocation(FVector LocationToPoint, TArray<AActor*> ActorsToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void PlayerGameTick(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpongeEnabled(const bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProductHandled(bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleItem(const AActor* HandleActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamepadTrace_BP(const FHitResult& HitTrace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamepadModeToggle_BP(bool bNewGamepadMode);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadModeToggle(bool bNewGamepadMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCashSpeedChanged(const float NewCashSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCashShopRendering(const bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginFinishTaskAICharacter(UTaskBase* FinishedTask, const ETaskResult TaskResult, const FString& Reason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveRight_Gamepad(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveItem_Gamepad(AProduct* Item, bool isNext);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward_Gamepad(float Val);
    
public:
    UFUNCTION(BlueprintCallable)
    void MiniGameStart(AAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    void MiniGameFinish(AAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    void LoadQueuePoint(FSavedWayPoint WayPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCashAndColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GrabItems();
    
    UFUNCTION(BlueprintCallable)
    void GrabItem_Gamepad(AProduct* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStrikeCounter();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetScannedProductsInSuccessArea() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetProductIndex(TSubclassOf<AItem> ProductClass, EProductCashShopState Group);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetMinigameWidgetRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinigameScannedProductCount(bool bTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinigameProductCount(bool bTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinigameFailedProductCount(bool bTotal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMeshIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentMeshColor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UPrimitiveComponent*> GetComponentsToIgnoreInTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetActorsToIgnoreInTrace() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishCashGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool FindSpawnTransformForItem(const TArray<UConveyorBeltSpawnLocComp*>& PossibleSpawnPoints, const TSubclassOf<AItem> ProductClass, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable)
    void EnableSponge(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DurabilityUpdate(const bool DirtyEffect, const float CurrentCashDurability, const float MaxCashDurability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DetachHandleItemFromPoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void CountQueuePoints();
    
private:
    UFUNCTION(BlueprintCallable)
    int32 CountProductsRemaining();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConveyorActivated(bool bActivated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeColor(FLinearColor Color);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelMinigame(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void CameraTurnRight_Keyboard(bool bIsRotating);
    
    UFUNCTION(BlueprintCallable)
    void CameraTurnLeftRight_Gamepad(float Val);
    
    UFUNCTION(BlueprintCallable)
    void CameraTurnLeft_Keyboard(bool bIsRotating);
    
    UFUNCTION(BlueprintCallable)
    void CameraControl(bool bIsControlling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateAverageTimeTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateAverageTimeThisRound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MouseRolledOffTheProduct();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MouseoverTheProduct();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DurabilityRoseOverCriticVal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DurabilityDroppedBelowCriticVal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackToPreviousMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachHandleItemToPoint(FHitResult& HitTrace);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyNewCashMesh(int32 MeshIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToGroup(TSubclassOf<AItem> ProductClass, int32 Amount, EProductCashShopState GroupToAddTo, bool bSuccessfulScan);
    
};

