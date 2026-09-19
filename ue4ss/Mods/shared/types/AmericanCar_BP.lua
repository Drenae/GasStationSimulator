---@meta

---@class AAmericanCar_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmericanCar_Static_shadowcaster UStaticMeshComponent
local AAmericanCar_BP_C = {}

function AAmericanCar_BP_C:ReceiveBeginPlay() end
---@param Enable boolean
function AAmericanCar_BP_C:EnableLamps_1(Enable) end
---@param EntryPoint int32
function AAmericanCar_BP_C:ExecuteUbergraph_AmericanCar_BP(EntryPoint) end


