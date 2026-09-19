---@meta

---@class UWBP_ServiceDifficultyButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHoverAnim UWidgetAnimation
---@field Action_Button UButton
---@field BG_Image UImage
---@field Difficulty_Image UImage
---@field Difficulty_TXT UTextBlock
---@field Image_182 UImage
---@field LockedText UTextBlock
---@field TextBlock_68 UTextBlock
---@field Label FText
---@field ['On Button Clicked'] FWBP_ServiceDifficultyButton_COn Button Clicked
---@field Difficulty EGuestServiceDifficulty
---@field Uppercase boolean
---@field IsDifficultyUnlocked boolean
---@field DifficultyImageToSet UTexture2D
---@field DifficultyDescriptionToSet FText
local UWBP_ServiceDifficultyButton_C = {}

---@param IsDesignTime boolean
function UWBP_ServiceDifficultyButton_C:PreConstruct(IsDesignTime) end
function UWBP_ServiceDifficultyButton_C:BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ServiceDifficultyButton_C:BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ServiceDifficultyButton_C:BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ServiceDifficultyButton_C:Hover() end
function UWBP_ServiceDifficultyButton_C:Unhover() end
---@param bShouldBeUnlocked boolean
function UWBP_ServiceDifficultyButton_C:ChangeLockedStatus(bShouldBeUnlocked) end
function UWBP_ServiceDifficultyButton_C:Construct() end
---@param InText FText
---@param SoftTexture TSoftObjectPtr<UTexture2D>
function UWBP_ServiceDifficultyButton_C:SetupVisual(InText, SoftTexture) end
---@param EntryPoint int32
function UWBP_ServiceDifficultyButton_C:ExecuteUbergraph_WBP_ServiceDifficultyButton(EntryPoint) end
---@param Difficulty_Button UWBP_ServiceDifficultyButton_C
UWBP_ServiceDifficultyButton_C['On Button Clicked__DelegateSignature'] = function(self, Difficulty_Button) end


