---@meta

---@class ARetroVan_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmericanCar_Kierownica UStaticMeshComponent
---@field cccc UStaticMeshComponent
local ARetroVan_BP_C = {}

function ARetroVan_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARetroVan_BP_C:ExecuteUbergraph_RetroVan_BP(EntryPoint) end


