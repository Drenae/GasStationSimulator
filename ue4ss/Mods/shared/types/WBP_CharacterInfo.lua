---@meta

---@class UWBP_CharacterInfo_C : UNPUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_0 UCanvasPanel
---@field State UTextBlock
---@field Task UTextBlock
---@field Time UTextBlock
local UWBP_CharacterInfo_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_CharacterInfo_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_CharacterInfo_C:ExecuteUbergraph_WBP_CharacterInfo(EntryPoint) end


