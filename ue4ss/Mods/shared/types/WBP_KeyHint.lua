---@meta

---@class UWBP_KeyHint_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Key_IMG UImage
---@field Key FKey
---@field IconSize FVector2D
local UWBP_KeyHint_C = {}

---@param IsDesignTime boolean
function UWBP_KeyHint_C:PreConstruct(IsDesignTime) end
function UWBP_KeyHint_C:Refresh() end
function UWBP_KeyHint_C:OnInitialized() end
function UWBP_KeyHint_C:Destruct() end
---@param EntryPoint int32
function UWBP_KeyHint_C:ExecuteUbergraph_WBP_KeyHint(EntryPoint) end


