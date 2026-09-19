---@meta

---@class UWBP_MonitorPanel_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ContractCompare_Overlay UOverlay
---@field ContractList_Vertical UVerticalBox
---@field WBP_MonitorContract_Selected UWBP_MonitorContract_C
---@field CompareMode boolean
---@field Platform ABP_JunkyardPlatform_C
---@field Monitor ABP_JunkyardMonitor_C
local UWBP_MonitorPanel_C = {}

function UWBP_MonitorPanel_C:CompleteContract() end
---@param bCompare boolean
function UWBP_MonitorPanel_C:ToggleCompareMode(bCompare) end
---@param Contract USpecialContract
function UWBP_MonitorPanel_C:OnContractButtonPicked(Contract) end
---@param AttachedPlatform ABP_JunkyardPlatform_C
---@param AttachedMonitor ABP_JunkyardMonitor_C
---@param SelectedContract USpecialContract
function UWBP_MonitorPanel_C:SetupWidget(AttachedPlatform, AttachedMonitor, SelectedContract) end
function UWBP_MonitorPanel_C:Construct() end
function UWBP_MonitorPanel_C:Destruct() end
function UWBP_MonitorPanel_C:CustomEscape() end
function UWBP_MonitorPanel_C:CloseWidget() end
---@param EntryPoint int32
function UWBP_MonitorPanel_C:ExecuteUbergraph_WBP_MonitorPanel(EntryPoint) end


