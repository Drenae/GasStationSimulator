---@meta

---@class ALookAt_Point_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field NPSmartObject UNPSmartObjectComponent
local ALookAt_Point_C = {}

function ALookAt_Point_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ALookAt_Point_C:ExecuteUbergraph_LookAt_Point(EntryPoint) end


