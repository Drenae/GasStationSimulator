#pragma once
#include "CoreMinimal.h"
#include "BiomCustomizationCategory.h"
#include "CustomizationPart.h"
#include "EHammerEditType.h"
#include "EStructureType.h"
#include "KeyItem.h"
#include "Hammer.generated.h"

class AActor;
class ACashShop;
class ACustomizationHousePart;
class AGSSPlayerCharacter;
class APlaceableActor;
class AQueuePointPreview;
class UAnimMontage;
class UCustomizationCategory;
class UHammerBuildingWidget;
class UHammerWidget;
class UInputComponent;
class UMaterialInstance;
class UMaterialInterface;
class USkeletalMeshComponent;
class USoundCue;
class UStaticMesh;

UCLASS(Blueprintable)
class GSS2_API AHammer : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHammerEditType EditingType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PlayerInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQueuePointPreview* CurrentlyEditedQueuePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQueuePointPreview* CashShopBaseQueuePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQueuePointPreview*> EditedQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACashShop* EditedCashShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlaceableActor* EditedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACustomizationHousePart* EditedWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACustomizationHousePart* PreviewWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EditedFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationPart QuickAccessWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviouslyOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomizationHousePart> DefaultWallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomizationHousePart> DefaultWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomizationHousePart> DefaultDoorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomizationHousePart> DefaultPillarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomizationHousePart> DefaultRoofClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQueuePointPreview> QueuePointIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickUpCashShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickUpTrashCan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PutDownObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PlaceNewWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StartEditingWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnHoverUIButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseHammerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HammerInteractionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OriginalFloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHammerWidget> HammerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHammerWidget* HammerWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHammerBuildingWidget> HammerBuildingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHammerBuildingWidget* HammerBuildingWidgetInstance;
    
public:
    AHammer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleUI_WallInteraction(EStructureType EditedStructure);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleUI_QuickAccessPartEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleUI_EditType(EHammerEditType EditType);
    
    UFUNCTION(BlueprintCallable)
    void StopInteractingWithPlaceableActor();
    
    UFUNCTION(BlueprintCallable)
    void StopEditCashRegisterQueue();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation_UseHammer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEmptyPreviewWall_LoadComplete();
    
    UFUNCTION(BlueprintCallable)
    void SetQueueToDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetQueuePointPosition();
    
    UFUNCTION(BlueprintCallable)
    void SecondaryInteract(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveQueuePoint();
    
    UFUNCTION(BlueprintCallable)
    void R_Action(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void QuickSwapWall(ACustomizationHousePart* TargetWall);
    
    UFUNCTION(BlueprintCallable)
    void Q_Action(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void PreviewNewWallRef_LoadComplete(FCustomizationPart CustomizationPart, bool bIsTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void PreviewNewWall_LoadComplete(TSoftObjectPtr<UStaticMesh> StaticMeshSPtr, TSoftObjectPtr<UMaterialInstance> MaterialSPtr, EStructureType StructureType, bool bIsTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void PreviewNewFloor_LoadComplete(TSoftObjectPtr<UMaterialInstance> MaterialSPtr);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation_UseHammer();
    
    UFUNCTION(BlueprintCallable)
    void PlaceQueuePoint(bool bIsSettingQueueToDefault);
    
    UFUNCTION(BlueprintCallable)
    void On_Unhover_PreviewNewWall(const FCustomizationPart& CustomizationPart);
    
    UFUNCTION(BlueprintCallable)
    void On_Unhover_PreviewNewFloor();
    
    UFUNCTION(BlueprintCallable)
    void On_Hover_PreviewNewWall(const FCustomizationPart& CustomizationPart, bool bIsTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void On_Hover_PreviewNewFloor(TSoftObjectPtr<UMaterialInstance> NewMaterialSPtr);
    
    UFUNCTION(BlueprintCallable)
    void LookForActorSecondaryInteract();
    
    UFUNCTION(BlueprintCallable)
    void LookForActorRInteract();
    
    UFUNCTION(BlueprintCallable)
    void LookForActorPrimaryInteract();
    
    UFUNCTION(BlueprintCallable)
    void LookForActorFInteract();
    
    UFUNCTION(BlueprintCallable)
    void LoadNextRoof();
    
    UFUNCTION(BlueprintCallable)
    void InteractWithWall(ACustomizationHousePart* TargetWall);
    
    UFUNCTION(BlueprintCallable)
    void InteractWithPlaceableActor(APlaceableActor* PlaceableActor);
    
    UFUNCTION(BlueprintCallable)
    void InteractWithFloor(AActor* FloorActor);
    
    UFUNCTION(BlueprintCallable)
    void Interact(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStructureType GetAvaliableStructureType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCustomizationPart> GetAllElementsToDisplay(UCustomizationCategory* Category, EStructureType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCustomizationPart> GetAllElementsFromCategory(UCustomizationCategory* Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBiomCustomizationCategory> GetAllCustomizationCategories();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorToInteract(bool bIsCheckingForFloor);
    
    UFUNCTION(BlueprintCallable)
    void F_Action(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void EscapeAction(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void EditCashRegisterQueue(ACashShop* CashShop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditCashDesk();
    
    UFUNCTION(BlueprintCallable)
    void E_EditCashDesk();
    
    UFUNCTION(BlueprintCallable)
    void E_Action(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawWrongChangeTypeWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawWallPriceOnScreen(float Price);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawQueuePointsCountWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawNotEditablePartWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawNoMoneyWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawLastQueuePointPlacementWarning(bool bDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDoorLimitWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawClosedStationWarning();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllQueuePoints();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmSwapWalls_LoadComplete(FCustomizationPart CustomizationPart, TSoftClassPtr<ACustomizationHousePart> StructureClass, bool bIsTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmSwapWalls(const FCustomizationPart& CustomizationPart, bool bIsTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmFloorSwap(TSoftObjectPtr<UMaterialInstance> MaterialSPtr, int32 Price);
    
    UFUNCTION(BlueprintCallable)
    void CloseUI_WallInteraction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToPlayerViewTarget();
    
};

