---@meta

---@class UWBP_LootingFailed_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field Image_67 UImage
---@field LockInfoHUD UWBP_LockpickingHUD_C
---@field MianLockPickREF UWBP_LockpickingHUD_C
local UWBP_LootingFailed_C = {}

function UWBP_LootingFailed_C:Construct() end
---@param EntryPoint int32
function UWBP_LootingFailed_C:ExecuteUbergraph_WBP_LootingFailed(EntryPoint) end


