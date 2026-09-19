---@meta

---@class ACarWashPistol_BP_C : ACarWashPistol
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VFXNozzle UChildActorComponent
---@field SM_Gauge_Pointer UStaticMeshComponent
---@field SM_Gauge_Wires UStaticMeshComponent
---@field SM_Gauge UStaticMeshComponent
---@field SM_Gauge_Base UStaticMeshComponent
---@field PistolCableLocation USceneComponent
---@field OverlayREF UWBP_CarWash_C
---@field TutorialOnceCreated boolean
---@field TutorialOnceREF UMiniGames_Tutorial_C
local ACarWashPistol_BP_C = {}

---@param Key FKey
function ACarWashPistol_BP_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ACarWashPistol_BP_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(Key) end
function ACarWashPistol_BP_C:OnPickUp() end
function ACarWashPistol_BP_C:OnDroped() end
function ACarWashPistol_BP_C:ReceiveDestroyed() end
function ACarWashPistol_BP_C:ReceiveBeginPlay() end
---@param Percentage float
function ACarWashPistol_BP_C:UpdatePistolGauge(Percentage) end
---@param NewSpread boolean
function ACarWashPistol_BP_C:SetVFXSpread(NewSpread) end
---@param EntryPoint int32
function ACarWashPistol_BP_C:ExecuteUbergraph_CarWashPistol_BP(EntryPoint) end


