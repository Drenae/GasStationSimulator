---@meta

---@class ACashShop_BP_C : ACashShop
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SoundtrackRadio UAudioComponent
---@field SM_Cash_Drawer UStaticMeshComponent
---@field SM_Cash_Register UStaticMeshComponent
---@field BP_Radio UChildActorComponent
---@field Computer UChildActorComponent
---@field ArrowComponent14 UArrowComponent
---@field ArrowComponent13 UArrowComponent
---@field ArrowComponent12 UArrowComponent
---@field ArrowComponent11 UArrowComponent
---@field ArrowComponent10 UArrowComponent
---@field ArrowComponent09 UArrowComponent
---@field ArrowComponent08 UArrowComponent
---@field ArrowComponent07 UArrowComponent
---@field ArrowComponent06 UArrowComponent
---@field ArrowComponent05 UArrowComponent
---@field ArrowComponent04 UArrowComponent
---@field ArrowComponent03 UArrowComponent
---@field ScannerArrowMesh UStaticMeshComponent
---@field ArrowComponent02 UArrowComponent
---@field Bottom3 UConveyorBeltSpawnLocComp
---@field ItemComponentBox UBoxComponent
---@field BoxCollision UBoxComponent
---@field Bottom2 UConveyorBeltSpawnLocComp
---@field Bottom1 UConveyorBeltSpawnLocComp
---@field Bottom UConveyorBeltSpawnLocComp
---@field Mid UConveyorBeltSpawnLocComp
---@field Top UConveyorBeltSpawnLocComp
---@field SM_Counter UStaticMeshComponent
---@field ItemAmount int32
---@field StartedMiniGameCharacter AAICharacterBase
---@field StartMinigameTIme float
---@field SpeedMaterial float
---@field CurrentDistanceMaterial float
---@field Delay float
---@field TutorialWidgetRef UMiniGames_Tutorial_C
---@field SpongeTutorialREF USpongeNotification_C
---@field ['Allert Message Text'] FText
---@field Warning UAllertMessage_C
---@field SoundtrackCueSoft TSoftObjectPtr<USoundCue>
---@field TemporaryStaticMesh UStaticMesh
---@field TemporaryColor FLinearColor
---@field DynamicMaterial UMaterialInstanceDynamic
---@field ParameterName FName
---@field temporaryloadMesh UStaticMesh
---@field ['Gamepad Cursor'] UWBP_GamepadCursorCashShop_C
local ACashShop_BP_C = {}

---@return TArray<AActor>
function ACashShop_BP_C:GetActorsToIgnoreInTrace() end
---@param bNewGamepadMode boolean
function ACashShop_BP_C:OnGamepadModeToggle_BP(bNewGamepadMode) end
---@param HitTrace FHitResult
function ACashShop_BP_C:OnGamepadTrace_BP(HitTrace) end
---@param Mesh UStaticMesh
function ACashShop_BP_C:Custom_CreateDynamicMaterial(Mesh) end
---@param EngineCursor UCursorWidget_C
function ACashShop_BP_C:GetEngineCursor(EngineCursor) end
---@return FName
function ACashShop_BP_C:GetInteractionName() end
---@param CanBePlaced boolean
---@param StaticMeshComp UStaticMeshComponent
function ACashShop_BP_C:ChangeMeshMaterial(CanBePlaced, StaticMeshComp) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACashShop_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACashShop_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACashShop_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param bIsQuest boolean
function ACashShop_BP_C:CheckTutorial(bIsQuest) end
---@param Loaded UObject
function ACashShop_BP_C:OnLoaded_31D2B67045221AC5D6CA3F8C390B8866(Loaded) end
function ACashShop_BP_C:FinishTask() end
function ACashShop_BP_C:ReceiveBeginPlay() end
---@param bShow boolean
function ACashShop_BP_C:UI_SetShiftMessageVisible(bShow) end
function ACashShop_BP_C:UI_UpdateStrike() end
function ACashShop_BP_C:UI_UpdateAverageTime() end
function ACashShop_BP_C:UI_UpdateProductCounters() end
function ACashShop_BP_C:FirstuCustomer() end
---@param MoneyEarned float
---@param bIsStrike boolean
---@param TotalProducts int32
---@param SuccessProducts int32
---@param AverageTimePerProduct float
---@param TipMoney float
function ACashShop_BP_C:UI_EndOfMinigameNotification(MoneyEarned, bIsStrike, TotalProducts, SuccessProducts, AverageTimePerProduct, TipMoney) end
---@param WorldLocation FVector
function ACashShop_BP_C:UI_ProductFail(WorldLocation) end
---@param bShow boolean
function ACashShop_BP_C:UI_ScanArrow(bShow) end
---@param bSuccess boolean
function ACashShop_BP_C:UI_ScanSuccess(bSuccess) end
---@param bLoad boolean
function ACashShop_BP_C:LoadLevelWhenNeeded(bLoad) end
---@param bShow boolean
function ACashShop_BP_C:UI_ShowTutorial(bShow) end
---@param DirtyEffect boolean
---@param CurrentCashDurability float
---@param MaxCashDurability float
function ACashShop_BP_C:DurabilityUpdate(DirtyEffect, CurrentCashDurability, MaxCashDurability) end
---@param NewCashSpeed float
function ACashShop_BP_C:OnCashSpeedChanged(NewCashSpeed) end
---@param DeltaSeconds float
function ACashShop_BP_C:ReceiveTick(DeltaSeconds) end
---@param HandleActor AActor
function ACashShop_BP_C:OnHandleItem(HandleActor) end
---@param Enabled boolean
function ACashShop_BP_C:OnSpongeEnabled(Enabled) end
function ACashShop_BP_C:BP_DurabilityDroppedBelowCriticVal() end
function ACashShop_BP_C:BP_MouseoverTheProduct() end
function ACashShop_BP_C:BP_MouseRolledOffTheProduct() end
function ACashShop_BP_C:BP_DurabilityRoseOverCriticVal() end
---@param Enabled boolean
function ACashShop_BP_C:OnCashShopRendering(Enabled) end
---@param Pawn APawn
function ACashShop_BP_C:DisableInteractionInfo(Pawn) end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function ACashShop_BP_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
---@param On boolean
function ACashShop_BP_C:EnableElectrocity(On) end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function ACashShop_BP_C:OnNewGameplayStuffUnlockStateChanged(NewUnlockableGameplayStuffState) end
function ACashShop_BP_C:ShowInteractionAlertMessage() end
---@param MeshToSet UStaticMesh
---@param MeshLevel int32
---@param Color FLinearColor
function ACashShop_BP_C:SetCashMeshPreview(MeshToSet, MeshLevel, Color) end
---@param MeshIndex int32
function ACashShop_BP_C:ApplyNewCashMesh(MeshIndex) end
function ACashShop_BP_C:BackToPreviousMesh() end
function ACashShop_BP_C:SetPreviousMesh() end
---@param Color FLinearColor
function ACashShop_BP_C:ChangeColor(Color) end
function ACashShop_BP_C:LoadCashAndColor() end
---@param GameLoaded boolean
function ACashShop_BP_C:OnLoaded(GameLoaded) end
---@param EntryPoint int32
function ACashShop_BP_C:ExecuteUbergraph_CashShop_BP(EntryPoint) end


