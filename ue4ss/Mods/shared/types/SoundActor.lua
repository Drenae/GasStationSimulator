---@meta

---@class ASoundActor_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field Sound UAudioComponent
local ASoundActor_C = {}

---@param Key FKey
function ASoundActor_C:InpActEvt_MuteSounds_K2Node_InputActionEvent_0(Key) end
function ASoundActor_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ASoundActor_C:ExecuteUbergraph_SoundActor(EntryPoint) end


