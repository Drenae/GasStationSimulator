---@meta

---@class ABP_Radio_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SOUNDTRACK_RADIO UAudioComponent
---@field SoundtrackCueSoft TSoftObjectPtr<USoundCue>
local ABP_Radio_C = {}

---@param Loaded UObject
function ABP_Radio_C:OnLoaded_63F7DE2147F0B8FC6E34BCAE22562952(Loaded) end
---@param On boolean
function ABP_Radio_C:EnableElectrocity(On) end
---@param EntryPoint int32
function ABP_Radio_C:ExecuteUbergraph_BP_Radio(EntryPoint) end


