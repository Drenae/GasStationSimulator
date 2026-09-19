---@meta

---@class UColorWallPaperCategoryButton_All_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Backward UWidgetAnimation
---@field Forward UWidgetAnimation
---@field ActionButton UDragoButton
---@field CategoryTitle_TXT UTextBlock
---@field Image_66 UImage
---@field Image_158 UImage
---@field Set_Name FText
---@field OnClickedButton FColorWallPaperCategoryButton_All_COnClickedButton
---@field isUnblocked boolean
---@field UnlockType EDecalUnlockType
---@field ParentREF UWBP_PanelColors_C
---@field Colors boolean
---@field Icon UTexture2D
---@field bIsActive boolean
---@field isSubFilter boolean
---@field ThisTypeButton TArray<UColorWallPaperCategoryButton_C>
---@field SubFilterTag FString
local UColorWallPaperCategoryButton_All_C = {}

function UColorWallPaperCategoryButton_All_C:SetNormal() end
function UColorWallPaperCategoryButton_All_C:SetActive() end
---@param IsDesignTime boolean
function UColorWallPaperCategoryButton_All_C:PreConstruct(IsDesignTime) end
function UColorWallPaperCategoryButton_All_C:BndEvt__ActionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UColorWallPaperCategoryButton_All_C:BndEvt__ActionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UColorWallPaperCategoryButton_All_C:Construct() end
function UColorWallPaperCategoryButton_All_C:BndEvt__ColorWallPaperCategoryButton_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UColorWallPaperCategoryButton_All_C:GamePadClick() end
---@param EntryPoint int32
function UColorWallPaperCategoryButton_All_C:ExecuteUbergraph_ColorWallPaperCategoryButton_All(EntryPoint) end
---@param UnlockType EDecalUnlockType
function UColorWallPaperCategoryButton_All_C:OnClickedButton__DelegateSignature(UnlockType) end


