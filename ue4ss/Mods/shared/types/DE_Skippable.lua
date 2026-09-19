---@meta

---@class UDE_Skippable_C : UDE_Base_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SequenceWidget UWBP_SequenceSkip_C
---@field PlayingSequence ULevelSequencePlayer
---@field UpgradeWidget UUserWidget
---@field MuteMusic boolean
local UDE_Skippable_C = {}

---@param InitGSSGameState AGSSGameState
function UDE_Skippable_C:InitializeEventDisplay(InitGSSGameState) end
function UDE_Skippable_C:SkipCutscene() end
function UDE_Skippable_C:FinishEventDisplay() end
---@param EntryPoint int32
function UDE_Skippable_C:ExecuteUbergraph_DE_Skippable(EntryPoint) end


