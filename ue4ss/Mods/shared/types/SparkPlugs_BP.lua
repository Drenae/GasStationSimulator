---@meta

---@class ASparkPlugs_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_SparkPlug_Cable3 UStaticMeshComponent
---@field SM_SparkPlug_Cable2 UStaticMeshComponent
---@field SM_SparkPlug_Cable1 UStaticMeshComponent
---@field SM_SparkPlug_Cable UStaticMeshComponent
---@field Garage UAudioComponent
---@field StartDelay float
local ASparkPlugs_BP_C = {}

---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function ASparkPlugs_BP_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function ASparkPlugs_BP_C:ExecuteUbergraph_SparkPlugs_BP(EntryPoint) end


