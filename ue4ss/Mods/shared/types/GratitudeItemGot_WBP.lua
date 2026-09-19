---@meta

---@class UGratitudeItemGot_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim_Joe UWidgetAnimation
---@field GlowAnim_Red UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field GlowAnim_Orange UWidgetAnimation
---@field Button_52 UButton
---@field Image UImage
---@field Image_118 UImage
---@field Image_cogency UImage
---@field ItemAmount_TXT UTextBlock
---@field ItemIcon_IMG UImage
---@field ItemName_TXT UTextBlock
---@field NiagaraSystemWidget_67 UNiagaraSystemWidget
---@field Icon UTexture2D
---@field Name FText
---@field Amount int32
---@field bIsJoeTrade boolean
---@field Timer FTimerHandle
local UGratitudeItemGot_WBP_C = {}

---@param Button_52 UButton
function UGratitudeItemGot_WBP_C:SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_3(Button_52) end
---@param NiagaraSystemWidget_67 UNiagaraSystemWidget
function UGratitudeItemGot_WBP_C:SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_2(NiagaraSystemWidget_67) end
---@param NiagaraSystemWidget_67 UNiagaraSystemWidget
function UGratitudeItemGot_WBP_C:SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_1(NiagaraSystemWidget_67) end
---@param Button_52 UButton
function UGratitudeItemGot_WBP_C:SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_0(Button_52) end
function UGratitudeItemGot_WBP_C:Finished_5AD32FED4AC6DBA09CE8CB99E944F906() end
function UGratitudeItemGot_WBP_C:Finished_A2ECF637422E1E756649A0B8A5B4D215() end
---@param Button_52 UButton
---@param bInIsEnabled boolean
function UGratitudeItemGot_WBP_C:Button_52_Event_0(Button_52, bInIsEnabled) end
function UGratitudeItemGot_WBP_C:BndEvt__GratitudeItemGot_WBP_Button_52_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param NiagaraSystemWidget_67 UNiagaraSystemWidget
---@param Reset boolean
function UGratitudeItemGot_WBP_C:NiagaraSystemWidget_67_Event_0(NiagaraSystemWidget_67, Reset) end
function UGratitudeItemGot_WBP_C:RemoveFromTimer() end
function UGratitudeItemGot_WBP_C:Construct() end
function UGratitudeItemGot_WBP_C:SelfClose() end
---@param EntryPoint int32
function UGratitudeItemGot_WBP_C:ExecuteUbergraph_GratitudeItemGot_WBP(EntryPoint) end


