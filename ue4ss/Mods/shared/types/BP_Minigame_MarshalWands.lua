---@meta

---@class ABP_Minigame_MarshalWands_C : AMinigame_MarshalWands
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlayerVehicleCheck UBoxComponent
---@field MarshalWands1 UStaticMeshComponent
---@field MarshalWands UStaticMeshComponent
local ABP_Minigame_MarshalWands_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_Minigame_MarshalWands_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_Minigame_MarshalWands_C:UserConstructionScript() end
function ABP_Minigame_MarshalWands_C:ReceiveBeginPlay() end
---@param bOn boolean
function ABP_Minigame_MarshalWands_C:TurnOnAirplaneStartLights(bOn) end
---@param bOn boolean
function ABP_Minigame_MarshalWands_C:TurnOnRunwayLights(bOn) end
---@param bSuccessfull boolean
function ABP_Minigame_MarshalWands_C:OnMinigameFinished_BP(bSuccessfull) end
---@param EntryPoint int32
function ABP_Minigame_MarshalWands_C:ExecuteUbergraph_BP_Minigame_MarshalWands(EntryPoint) end


