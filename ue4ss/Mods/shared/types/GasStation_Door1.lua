---@meta

---@class AGasStation_Door1_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_angle_64F30F22415E534E85059EBF324C64A4 float
---@field Timeline_0__Direction_64F30F22415E534E85059EBF324C64A4 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field StartTransform FTransform
---@field EndTransform FTransform
local AGasStation_Door1_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGasStation_Door1_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AGasStation_Door1_C:UserConstructionScript() end
function AGasStation_Door1_C:Timeline_0__FinishedFunc() end
function AGasStation_Door1_C:Timeline_0__UpdateFunc() end
function AGasStation_Door1_C:OpenDoorR() end
function AGasStation_Door1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Door1_C:ExecuteUbergraph_GasStation_Door1(EntryPoint) end


