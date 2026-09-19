---@meta

---@class UWBP_NextEmployeeTimer_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Day UTextBlock
---@field Hour UTextBlock
---@field Minute UTextBlock
---@field PlayerState AGSSPlayerState_BP_C
---@field EndTime FTimeStruct
---@field Finish boolean
---@field NewVar_0 FTimeStruct
local UWBP_NextEmployeeTimer_C = {}

function UWBP_NextEmployeeTimer_C:Construct() end
---@param UpdatedTime FTimeStruct
function UWBP_NextEmployeeTimer_C:OnGameTimeUpdated_Event_0(UpdatedTime) end
---@param EntryPoint int32
function UWBP_NextEmployeeTimer_C:ExecuteUbergraph_WBP_NextEmployeeTimer(EntryPoint) end


