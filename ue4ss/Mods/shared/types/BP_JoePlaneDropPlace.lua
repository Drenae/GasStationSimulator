---@meta

---@class ABP_JoePlaneDropPlace_C : APlaneDropPlace
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Highlight_Component UHighlight_Component_C
---@field AllHoles int32
---@field FixedHoles int32
---@field InfoWidget URemainingHoles_WBP_C
---@field Timer FTimerHandle
---@field DropZone2ndHighlightValue float
---@field ChangeHighlight boolean
---@field DropPlaneRef UDropPlaneNotification_WBP_C
---@field CurrentPlaneParts TArray<FPartStruct>
local ABP_JoePlaneDropPlace_C = {}

---@return boolean
function ABP_JoePlaneDropPlace_C:IsOnFixingTapeQuestAndHasTape() end
function ABP_JoePlaneDropPlace_C:ReceiveBeginPlay() end
---@param bOn boolean
function ABP_JoePlaneDropPlace_C:TurnOnHighlight(bOn) end
---@param bOn boolean
function ABP_JoePlaneDropPlace_C:TurnOnHolesHighlight(bOn) end
---@param NewPlaneState EJoeAirplaneState
function ABP_JoePlaneDropPlace_C:OnJoePlaneStateChange(NewPlaneState) end
---@param FixedHoles int32
---@param NumberOfAllHoles int32
function ABP_JoePlaneDropPlace_C:CE_OnJoePlaneHoleFixed(FixedHoles, NumberOfAllHoles) end
function ABP_JoePlaneDropPlace_C:HighlightColorPlane() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_JoePlaneDropPlace_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ABP_JoePlaneDropPlace_C:ExecuteUbergraph_BP_JoePlaneDropPlace(EntryPoint) end


