---@meta

---@class AAirport_BP_C : AAirport
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Index int32
---@field MaxIndex int32
local AAirport_BP_C = {}

---@return boolean
function AAirport_BP_C:IsOnCheckDepartureScreenQuest() end
---@param DeltaSeconds float
function AAirport_BP_C:ReceiveTick(DeltaSeconds) end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AAirport_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function AAirport_BP_C:ReceiveBeginPlay() end
function AAirport_BP_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function AAirport_BP_C:ExecuteUbergraph_Airport_BP(EntryPoint) end


