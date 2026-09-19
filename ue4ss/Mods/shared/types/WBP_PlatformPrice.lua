---@meta

---@class UWBP_PlatformPrice_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarPrice_TXT UTextBlock
---@field PlatformPanelRef UWBP_PlatformPanelNew_C
local UWBP_PlatformPrice_C = {}

---@param Value float
function UWBP_PlatformPrice_C:SetPrice(Value) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UWBP_PlatformPrice_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UWBP_PlatformPrice_C:OnMouseLeave(MouseEvent) end
---@param EntryPoint int32
function UWBP_PlatformPrice_C:ExecuteUbergraph_WBP_PlatformPrice(EntryPoint) end


