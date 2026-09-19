---@meta

---@class UCursorWidget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ClosedHandAnim UWidgetAnimation
---@field MockMockAnim UWidgetAnimation
---@field ClosedHand UImage
---@field CustomCursor UImage
---@field OpenedHand UImage
local UCursorWidget_C = {}

function UCursorWidget_C:SetOverlayReference() end
function UCursorWidget_C:OnHover() end
function UCursorWidget_C:OnUnhovered() end
function UCursorWidget_C:BeginCashRegister() end
function UCursorWidget_C:EndCashRegister() end
function UCursorWidget_C:Construct() end
---@param LoadedMaps boolean
---@param NewVersion boolean
function UCursorWidget_C:OnMapLoaded(LoadedMaps, NewVersion) end
function UCursorWidget_C:Destruct() end
---@param EntryPoint int32
function UCursorWidget_C:ExecuteUbergraph_CursorWidget(EntryPoint) end


