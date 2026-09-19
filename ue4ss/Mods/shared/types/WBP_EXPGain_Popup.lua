---@meta

---@class UWBP_EXPGain_Popup_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnConstruct UWidgetAnimation
---@field ExpGained UTextBlock
---@field Main_Overlay UOverlay
---@field TimerHandle FTimerHandle
---@field Counter int32
---@field InputEXPGained int32
---@field TimeToDisappear float
---@field DisappearTimer FTimerHandle
local UWBP_EXPGain_Popup_C = {}

---@return FText
function UWBP_EXPGain_Popup_C:Get_ExpGained_Text_0() end
function UWBP_EXPGain_Popup_C:StartCount() end
---@param ExpGained int32
function UWBP_EXPGain_Popup_C:Init(ExpGained) end
function UWBP_EXPGain_Popup_C:OnCountFinished() end
function UWBP_EXPGain_Popup_C:Disappear() end
---@param EntryPoint int32
function UWBP_EXPGain_Popup_C:ExecuteUbergraph_WBP_EXPGain_Popup(EntryPoint) end


