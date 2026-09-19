---@meta

---@class UWBP_CamperSlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Blocker1 UOverlay
---@field Camper1 UImage
---@field Image_lock1 UImage
---@field CamperStruct FCamperStruct
local UWBP_CamperSlot_C = {}

function UWBP_CamperSlot_C:Construct() end
function UWBP_CamperSlot_C:CheckState() end
---@param EntryPoint int32
function UWBP_CamperSlot_C:ExecuteUbergraph_WBP_CamperSlot(EntryPoint) end


