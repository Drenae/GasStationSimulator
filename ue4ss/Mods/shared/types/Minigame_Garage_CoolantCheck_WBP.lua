---@meta

---@class UMinigame_Garage_CoolantCheck_WBP_C : UMinigameCoolantCheckWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_IMG UImage
---@field CurVal USlider
---@field MaxVal USlider
---@field MinVal USlider
local UMinigame_Garage_CoolantCheck_WBP_C = {}

---@param MinVal float
---@param MaxVal float
function UMinigame_Garage_CoolantCheck_WBP_C:SetMinigameValues(MinVal, MaxVal) end
---@param CurVal float
function UMinigame_Garage_CoolantCheck_WBP_C:SetCurrentValue(CurVal) end
---@param EntryPoint int32
function UMinigame_Garage_CoolantCheck_WBP_C:ExecuteUbergraph_Minigame_Garage_CoolantCheck_WBP(EntryPoint) end


