---@meta

---@class ATrashShredder_BP_C : ATrashShredder
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Sredder_gear1 UStaticMeshComponent
---@field SM_Sredder_gear UStaticMeshComponent
---@field ShredderWheels_Wheel2_BEE73114464D076C50391EB9C3B87367 float
---@field ShredderWheels_Wheel1_BEE73114464D076C50391EB9C3B87367 float
---@field ShredderWheels__Direction_BEE73114464D076C50391EB9C3B87367 ETimelineDirection::Type
---@field ShredderWheels UTimelineComponent
---@field bIsPlaying boolean
local ATrashShredder_BP_C = {}

function ATrashShredder_BP_C:ShredderWheels__FinishedFunc() end
function ATrashShredder_BP_C:ShredderWheels__UpdateFunc() end
function ATrashShredder_BP_C:OnButtonPress() end
---@param EntryPoint int32
function ATrashShredder_BP_C:ExecuteUbergraph_TrashShredder_BP(EntryPoint) end


