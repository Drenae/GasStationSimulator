---@meta

---@class A00_Mirror_Base_C : AMirror
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Mirror UStaticMeshComponent
---@field StartDelay float
local A00_Mirror_Base_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function A00_Mirror_Base_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function A00_Mirror_Base_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Enabled boolean
function A00_Mirror_Base_C:InteractMode(Enabled) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function A00_Mirror_Base_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function A00_Mirror_Base_C:ExecuteUbergraph_00_Mirror_Base(EntryPoint) end


