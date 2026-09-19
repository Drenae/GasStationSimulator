---@meta

---@class ABP_IceCreamBuildingNew_C : AIceCreamBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field InteractionBlockerBig UStaticMeshComponent
---@field InteractionBlockerSmall UStaticMeshComponent
---@field SFX_IceCream_freezer_loop_01_Cue UAudioComponent
---@field SFX_IceCream_freezer_loop_02_Cue UAudioComponent
---@field SFX_IceCream_Scooping_loop_Cue UAudioComponent
---@field ArrowComponent8 UArrowComponent
---@field ArrowComponent7 UArrowComponent
---@field ArrowComponent6 UArrowComponent
---@field ArrowComponent5 UArrowComponent
---@field ArrowComponent4 UArrowComponent
---@field ArrowComponent3 UArrowComponent
---@field ArrowComponent2 UArrowComponent
---@field ArrowComponent1 UArrowComponent
---@field IceCreamMinigameUI UIceCreamMinigame_C
---@field OrderHBWidget UIceCreamOrderHB_C
---@field CanShowAllert boolean
local ABP_IceCreamBuildingNew_C = {}

---@return FName
function ABP_IceCreamBuildingNew_C:GetInteractionName() end
---@param NotifyName FName
function ABP_IceCreamBuildingNew_C:OnNotifyEnd_02B8E433487678AF3026438FA21D79EF(NotifyName) end
---@param NotifyName FName
function ABP_IceCreamBuildingNew_C:OnNotifyBegin_02B8E433487678AF3026438FA21D79EF(NotifyName) end
---@param NotifyName FName
function ABP_IceCreamBuildingNew_C:OnInterrupted_02B8E433487678AF3026438FA21D79EF(NotifyName) end
---@param NotifyName FName
function ABP_IceCreamBuildingNew_C:OnBlendOut_02B8E433487678AF3026438FA21D79EF(NotifyName) end
---@param NotifyName FName
function ABP_IceCreamBuildingNew_C:OnCompleted_02B8E433487678AF3026438FA21D79EF(NotifyName) end
function ABP_IceCreamBuildingNew_C:ReceiveBeginPlay() end
function ABP_IceCreamBuildingNew_C:UI_OnStartMinigame() end
function ABP_IceCreamBuildingNew_C:UI_OnEndMinigame() end
---@param bShowInfo boolean
---@param UIOrder TArray<FIceCreamOrders>
function ABP_IceCreamBuildingNew_C:UI_OnOrderCheck(bShowInfo, UIOrder) end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_IceCreamBuildingNew_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function ABP_IceCreamBuildingNew_C:PlayBellMontage() end
---@param bPlay boolean
function ABP_IceCreamBuildingNew_C:PlaySoundIdleBig(bPlay) end
---@param bPlay boolean
function ABP_IceCreamBuildingNew_C:PlaySoundIdleSmall(bPlay) end
---@param bPressed boolean
function ABP_IceCreamBuildingNew_C:PlaySoundScooping(bPressed) end
function ABP_IceCreamBuildingNew_C:UI_ShowTutorial() end
function ABP_IceCreamBuildingNew_C:UI_ShowNotify() end
function ABP_IceCreamBuildingNew_C:PostLoadMapsBlueprintEvent() end
function ABP_IceCreamBuildingNew_C:ShowInteractionAlertMessage() end
function ABP_IceCreamBuildingNew_C:UnlockMessage() end
function ABP_IceCreamBuildingNew_C:UI_OnCannotTakeNextScoop() end
---@param bVisibility boolean
function ABP_IceCreamBuildingNew_C:OnSpoonChanged(bVisibility) end
---@param EntryPoint int32
function ABP_IceCreamBuildingNew_C:ExecuteUbergraph_BP_IceCreamBuildingNew(EntryPoint) end


