---@meta

---@class UPlatformPanelContractButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ActionButton UButton
---@field ContractProgressBar UProgressBar
---@field ContractTitle_TXT UTextBlock
---@field None_TXT UTextBlock
---@field PickedBorder_IMG UImage
---@field MonitorPanelREF UWBP_MonitorPanel_C
---@field CurrentPicked boolean
---@field ContractIndex int32
---@field ContractRef USpecialContract
---@field WreckRef AJunkyardCarWreck
local UPlatformPanelContractButton_C = {}

function UPlatformPanelContractButton_C:Construct() end
function UPlatformPanelContractButton_C:BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UPlatformPanelContractButton_C:BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UPlatformPanelContractButton_C:BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UPlatformPanelContractButton_C:SetNormal() end
function UPlatformPanelContractButton_C:SetPicked() end
---@param EntryPoint int32
function UPlatformPanelContractButton_C:ExecuteUbergraph_PlatformPanelContractButton(EntryPoint) end


