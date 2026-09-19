---@meta

---@class UDE_Base_C : UEventDisplay
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PrevMinigameState ECharacterState
---@field WaitForPlayerMobileTimer FTimerHandle
---@field WaitForPlayerMobile boolean
local UDE_Base_C = {}

---@param InitGSSGameState AGSSGameState
function UDE_Base_C:InitializeEventDisplay(InitGSSGameState) end
function UDE_Base_C:FinishEventDisplay() end
function UDE_Base_C:CheckForPlayerMobile() end
---@param EntryPoint int32
function UDE_Base_C:ExecuteUbergraph_DE_Base(EntryPoint) end


