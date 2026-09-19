---@meta

---@class UDecorationManagementEntry_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button_63 UButton
---@field IsON UCheckBox
---@field MapNameText UTextBlock
---@field Description FName
---@field LevelName FName
---@field DecorationCamera ADecorationCamera
---@field Item FText
---@field ParentContainer UDecorationManagementContainer_WBP_C
local UDecorationManagementEntry_WBP_C = {}

function UDecorationManagementEntry_WBP_C:Construct() end
---@param bIsChecked boolean
function UDecorationManagementEntry_WBP_C:BndEvt__IsOn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
function UDecorationManagementEntry_WBP_C:BndEvt__Button_63_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UDecorationManagementEntry_WBP_C:BndEvt__Button_63_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UDecorationManagementEntry_WBP_C:BndEvt__Button_63_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
---@param SetActive boolean
function UDecorationManagementEntry_WBP_C:GamePadHover(SetActive) end
function UDecorationManagementEntry_WBP_C:GamePadClicked() end
---@param EntryPoint int32
function UDecorationManagementEntry_WBP_C:ExecuteUbergraph_DecorationManagementEntry_WBP(EntryPoint) end


