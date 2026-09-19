---@meta

---@class UWBP_UpgradesParent_C : UPC_Upgrades
---@field UberGraphFrame FPointerToUberGraphFrame
local UWBP_UpgradesParent_C = {}

---@param TechAsset UTechnologyAsset
function UWBP_UpgradesParent_C:RefreshassetToUnlock(TechAsset) end
function UWBP_UpgradesParent_C:SetButtonsNormal() end
---@param EntryPoint int32
function UWBP_UpgradesParent_C:ExecuteUbergraph_WBP_UpgradesParent(EntryPoint) end


