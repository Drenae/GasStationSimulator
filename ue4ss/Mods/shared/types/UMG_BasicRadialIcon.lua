---@meta

---@class UUMG_BasicRadialIcon_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Shake UWidgetAnimation
---@field Grow UWidgetAnimation
---@field BG_Image UImage
---@field Frame UImage
---@field GSSButton_58 UGSSButton
---@field Icon UImage
---@field Icon_Blocked UImage
---@field Sizer USizeBox
---@field TaskName_NamedSlot UNamedSlot
---@field IconImage UTexture2D
---@field IconSize float
---@field Settings FFBasicIconSettings
---@field CurrentColor FLinearColor
---@field highlighted boolean
---@field alpha float
---@field Tag FGameplayTag
---@field ItemLocked boolean
local UUMG_BasicRadialIcon_C = {}

---@param CanBeHighlighted boolean
function UUMG_BasicRadialIcon_C:CanBeHighlighted(CanBeHighlighted) end
---@return FLinearColor
function UUMG_BasicRadialIcon_C:Get_Icon_ColorAndOpacity_0() end
---@param IsDesignTime boolean
function UUMG_BasicRadialIcon_C:PreConstruct(IsDesignTime) end
function UUMG_BasicRadialIcon_C:OnHighlight() end
function UUMG_BasicRadialIcon_C:OnUnhighlight() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUMG_BasicRadialIcon_C:Tick(MyGeometry, InDeltaTime) end
function UUMG_BasicRadialIcon_C:Construct() end
---@param EntryPoint int32
function UUMG_BasicRadialIcon_C:ExecuteUbergraph_UMG_BasicRadialIcon(EntryPoint) end


