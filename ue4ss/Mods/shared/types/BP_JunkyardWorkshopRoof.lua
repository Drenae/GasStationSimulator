---@meta

---@class ABP_JunkyardWorkshopRoof_C : AWorkshopRoof
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_FluorescentLight_01 UStaticMeshComponent
local ABP_JunkyardWorkshopRoof_C = {}

function ABP_JunkyardWorkshopRoof_C:OnRoofStartedMoving() end
function ABP_JunkyardWorkshopRoof_C:OnRoofFinishedMoving() end
---@param EntryPoint int32
function ABP_JunkyardWorkshopRoof_C:ExecuteUbergraph_BP_JunkyardWorkshopRoof(EntryPoint) end


