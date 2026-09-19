---@meta

---@class UTradeSkill_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TutorialAnim UWidgetAnimation
---@field CogencyClick UWidgetAnimation
---@field TimeClick UWidgetAnimation
---@field CalmClick UWidgetAnimation
---@field GratitudeClick UWidgetAnimation
---@field Hover UWidgetAnimation
---@field Button_42 UButton
---@field HorizontalBox_93 UHorizontalBox
---@field Image UImage
---@field Image_0 UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_5 UImage
---@field Image_6 UImage
---@field Image_7 UImage
---@field Image_84 UImage
---@field Image_92 UImage
---@field Image_171 UImage
---@field Image_246 UImage
---@field Image_baseball UImage
---@field Image_time UImage
---@field NiagaraSystemWidget UNiagaraSystemWidget
---@field NiagaraSystemWidget_1 UNiagaraSystemWidget
---@field NiagaraSystemWidget_2 UNiagaraSystemWidget
---@field NiagaraSystemWidget_67 UNiagaraSystemWidget
---@field Overlay_0 UOverlay
---@field RetainerBox_0 URetainerBox
---@field RichText_desc URichTextBlock
---@field TextBlock_Name UTextBlock
---@field TextBlock_Timer UTextBlock
---@field TextBlock_Timer_2 UTextBlock
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field TradeWidgetREF UAirStripTrade_Test_C
---@field HoverSkill FTradeSkill_CHoverSkill
---@field UnhoverSkill FTradeSkill_CUnhoverSkill
---@field Texture UTexture2D
---@field Name FText
---@field bIsCooldown boolean
---@field SkillTypeEnum ETradingSkill
---@field IsTutorial boolean
---@field Desc FText
local UTradeSkill_C = {}

---@param NiagaraSystemWidget_2 UNiagaraSystemWidget
function UTradeSkill_C:SequenceEvent__ENTRYPOINTTradeSkill_3(NiagaraSystemWidget_2) end
---@param NiagaraSystemWidget_1 UNiagaraSystemWidget
function UTradeSkill_C:SequenceEvent__ENTRYPOINTTradeSkill_2(NiagaraSystemWidget_1) end
---@param NiagaraSystemWidget UNiagaraSystemWidget
function UTradeSkill_C:SequenceEvent__ENTRYPOINTTradeSkill_1(NiagaraSystemWidget) end
---@param NiagaraSystemWidget_67 UNiagaraSystemWidget
function UTradeSkill_C:SequenceEvent__ENTRYPOINTTradeSkill_0(NiagaraSystemWidget_67) end
function UTradeSkill_C:Finished_A9301CDA4E1BBADF95931E9F9E497613() end
function UTradeSkill_C:Finished_56EAA9B645CCDA914258EE99A31E1CEC() end
function UTradeSkill_C:Finished_E66C220C4D702C595C152C98216C8BEC() end
function UTradeSkill_C:Finished_646FAD8443C35B533C3CB5AA5E276B3A() end
---@param NiagaraSystemWidget_67 UNiagaraSystemWidget
---@param Reset boolean
function UTradeSkill_C:NiagaraSystemWidget_67_Event_0(NiagaraSystemWidget_67, Reset) end
---@param NiagaraSystemWidget UNiagaraSystemWidget
---@param Reset boolean
function UTradeSkill_C:NiagaraSystemWidget_Event_0(NiagaraSystemWidget, Reset) end
---@param NiagaraSystemWidget_1 UNiagaraSystemWidget
---@param Reset boolean
function UTradeSkill_C:NiagaraSystemWidget_1_Event_0(NiagaraSystemWidget_1, Reset) end
---@param NiagaraSystemWidget_2 UNiagaraSystemWidget
---@param Reset boolean
function UTradeSkill_C:NiagaraSystemWidget_2_Event_0(NiagaraSystemWidget_2, Reset) end
---@param IsDesignTime boolean
function UTradeSkill_C:PreConstruct(IsDesignTime) end
function UTradeSkill_C:Construct() end
function UTradeSkill_C:BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UTradeSkill_C:BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UTradeSkill_C:BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param Skill ETradingSkill
function UTradeSkill_C:NotyficationOfSkillused(Skill) end
---@param Skill ETradingSkill
---@param CooldownTime int32
function UTradeSkill_C:UpdateSkillTimeToEnable(Skill, CooldownTime) end
function UTradeSkill_C:EnableDisable() end
---@param Hover boolean
function UTradeSkill_C:GamePadHover(Hover) end
function UTradeSkill_C:GamePadClick() end
---@param EntryPoint int32
function UTradeSkill_C:ExecuteUbergraph_TradeSkill(EntryPoint) end
function UTradeSkill_C:UnhoverSkill__DelegateSignature() end
function UTradeSkill_C:HoverSkill__DelegateSignature() end


