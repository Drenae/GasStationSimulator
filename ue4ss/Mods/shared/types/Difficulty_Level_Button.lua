---@meta

---@class UDifficulty_Level_Button_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChooseAnim UWidgetAnimation
---@field HoverAnim UWidgetAnimation
---@field Button_103 UButton
---@field Image UImage
---@field Image_0 UImage
---@field NiagaraSystemWidget_131 UNiagaraSystemWidget
---@field TextBlock_68 UTextBlock
---@field bg UTexture2D
---@field Text FText
---@field Color FLinearColor
---@field Clicked FDifficulty_Level_Button_CClicked
---@field MarshallDifficultyPARENT_REF UWBP_MarshalMinigameDifficulty_C
---@field BGColor FLinearColor
local UDifficulty_Level_Button_C = {}

---@param NiagaraSystemWidget_131 UNiagaraSystemWidget
function UDifficulty_Level_Button_C:SequenceEvent__ENTRYPOINTDifficulty_Level_Button_0(NiagaraSystemWidget_131) end
---@param NiagaraSystemWidget_131 UNiagaraSystemWidget
---@param Reset boolean
function UDifficulty_Level_Button_C:NiagaraSystemWidget_131_Event_0(NiagaraSystemWidget_131, Reset) end
---@param IsDesignTime boolean
function UDifficulty_Level_Button_C:PreConstruct(IsDesignTime) end
function UDifficulty_Level_Button_C:BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UDifficulty_Level_Button_C:BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UDifficulty_Level_Button_C:BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UDifficulty_Level_Button_C:Hoover() end
function UDifficulty_Level_Button_C:Unhoover() end
---@param EntryPoint int32
function UDifficulty_Level_Button_C:ExecuteUbergraph_Difficulty_Level_Button(EntryPoint) end
function UDifficulty_Level_Button_C:Clicked__DelegateSignature() end


