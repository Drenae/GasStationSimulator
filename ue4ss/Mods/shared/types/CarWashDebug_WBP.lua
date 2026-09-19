---@meta

---@class UCarWashDebug_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarWashAutomatic_TXT UTextBlock
---@field CarWashLevel_TXT UTextBlock
---@field CarWashOpen_TXT UTextBlock
---@field TrashInSewerAmount_TXT UTextBlock
---@field WaterPressureValue_TXT UTextBlock
---@field TimeSinceUpdate float
---@field CarWashRef ACarWash
---@field CarWashStationRef ACarWashStation
---@field TrashVolume ACarWashTrashVolume
local UCarWashDebug_WBP_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UCarWashDebug_WBP_C:Tick(MyGeometry, InDeltaTime) end
function UCarWashDebug_WBP_C:Construct() end
---@param EntryPoint int32
function UCarWashDebug_WBP_C:ExecuteUbergraph_CarWashDebug_WBP(EntryPoint) end


