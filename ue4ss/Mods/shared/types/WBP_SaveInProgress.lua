---@meta

---@class UWBP_SaveInProgress_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Roll UWidgetAnimation
---@field EnterAnimation UWidgetAnimation
---@field Image_99 UImage
---@field Throbber UThrobber
---@field Finish FWBP_SaveInProgress_CFinish
local UWBP_SaveInProgress_C = {}

function UWBP_SaveInProgress_C:Construct() end
---@param EntryPoint int32
function UWBP_SaveInProgress_C:ExecuteUbergraph_WBP_SaveInProgress(EntryPoint) end
function UWBP_SaveInProgress_C:Finish__DelegateSignature() end


