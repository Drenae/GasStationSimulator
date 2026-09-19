---@meta

---@class UElectrocityEvent_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Elecricity boolean
---@field IntroductionTutorialRef UMiniGames_Tutorial_C
local UElectrocityEvent_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UElectrocityEvent_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param bOn boolean
function UElectrocityEvent_C:OnEnergy(bOn) end
---@param World UWorld
---@param bEventEnabled boolean
function UElectrocityEvent_C:InitializeEventWorld(World, bEventEnabled) end
---@param bEventEnabled boolean
function UElectrocityEvent_C:ActivateEvent(bEventEnabled) end
function UElectrocityEvent_C:IntroductionClosed() end
---@param Enable boolean
function UElectrocityEvent_C:OnInputEnabled(Enable) end
---@param EntryPoint int32
function UElectrocityEvent_C:ExecuteUbergraph_ElectrocityEvent(EntryPoint) end


