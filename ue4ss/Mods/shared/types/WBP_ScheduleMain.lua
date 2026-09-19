---@meta

---@class UWBP_ScheduleMain_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EmployeeScroll UScrollBox
---@field Image_246 UImage
---@field OwnedEmployeeArrayNew TArray<AAICharacterBase>
---@field AllWidgetsInScroll TArray<UWBP_ScheduleEmployee_C>
---@field ScheduleWidget UWBP_ScheduleEmployee_C
local UWBP_ScheduleMain_C = {}

function UWBP_ScheduleMain_C:Construct() end
function UWBP_ScheduleMain_C:Refresh() end
---@param EntryPoint int32
function UWBP_ScheduleMain_C:ExecuteUbergraph_WBP_ScheduleMain(EntryPoint) end


