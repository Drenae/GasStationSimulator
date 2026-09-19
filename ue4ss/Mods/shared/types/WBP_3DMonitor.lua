---@meta

---@class UWBP_3DMonitor_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field IdleAnimation UWidgetAnimation
---@field Border_Contract UBorder
---@field Image_41 UImage
---@field Image_104 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field NoContract_Overlay UOverlay
---@field WBP_Projector UWBP_Projector_C
---@field Wreck AJunkyardCarWreck
---@field ContractRef USpecialContract
local UWBP_3DMonitor_C = {}

function UWBP_3DMonitor_C:UpdateSelectedContract() end
function UWBP_3DMonitor_C:OnWreckRemoved() end
---@param Wreck AJunkyardCarWreck
function UWBP_3DMonitor_C:OnWreckPlaced(Wreck) end
---@param Contract USpecialContract
function UWBP_3DMonitor_C:SetupContract(Contract) end
function UWBP_3DMonitor_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_3DMonitor_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_3DMonitor_C:ExecuteUbergraph_WBP_3DMonitor(EntryPoint) end


