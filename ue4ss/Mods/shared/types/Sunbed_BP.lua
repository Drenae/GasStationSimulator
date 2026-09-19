---@meta

---@class ASunbed_BP_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ArrowExit UArrowComponent
---@field arrow UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field ['Out Radius'] float
---@field ['Out Half Height'] float
---@field isSitting boolean
---@field AreInteractionsBlocked boolean
---@field Cigarette ABP_Cigarette_Sunbed_C
---@field Beer ABP_Beer_Sunbed_C
---@field InteractionWidget UWBP_Sunbed_C
---@field ChameleonEffect AChameleon_C
---@field BeersDrankCount int32
---@field AlcoholEffectIncrement float
---@field BeersDrankRange FInt32Range
local ASunbed_BP_C = {}

function ASunbed_BP_C:ClearPlayerHandleItem() end
---@return FName
function ASunbed_BP_C:GetInteractionName() end
function ASunbed_BP_C:SetPlayerMeshes_Invis() end
function ASunbed_BP_C:SetPlayerMeshes() end
---@param NotifyName FName
function ASunbed_BP_C:OnNotifyEnd_3266A0494DF0B67DED7D96A441D5E912(NotifyName) end
---@param NotifyName FName
function ASunbed_BP_C:OnNotifyBegin_3266A0494DF0B67DED7D96A441D5E912(NotifyName) end
---@param NotifyName FName
function ASunbed_BP_C:OnInterrupted_3266A0494DF0B67DED7D96A441D5E912(NotifyName) end
---@param NotifyName FName
function ASunbed_BP_C:OnBlendOut_3266A0494DF0B67DED7D96A441D5E912(NotifyName) end
---@param NotifyName FName
function ASunbed_BP_C:OnCompleted_3266A0494DF0B67DED7D96A441D5E912(NotifyName) end
function ASunbed_BP_C:ReceiveBeginPlay() end
---@param IsPressed boolean
function ASunbed_BP_C:OnInteractionClicked(IsPressed) end
function ASunbed_BP_C:OnLPMClicked() end
---@param IsPressed boolean
function ASunbed_BP_C:OnRPMClicked(IsPressed) end
function ASunbed_BP_C:UpdateAlcoholEffect() end
---@param EntryPoint int32
function ASunbed_BP_C:ExecuteUbergraph_Sunbed_BP(EntryPoint) end


