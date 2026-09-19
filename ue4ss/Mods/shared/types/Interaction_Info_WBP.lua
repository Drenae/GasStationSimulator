---@meta

---@class UInteraction_Info_WBP_C : UInteractionInfoWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConnectingTxt UTextBlock
---@field Image_1 UImage
---@field Image_33 UImage
---@field Image_143 UImage
---@field Interaction UOverlay
---@field OLD_HORIZONTAL_DELE UHorizontalBox
---@field Side_1 UImage
---@field SizeBox_0 USizeBox
---@field ENUM_PREFIX ENUM_INTERACTION_PREFIX::Type
---@field ENUM_BUTTON ENUM_INTERACTION_BUTTON::Type
---@field ENUM_SOFIX ENUM_INTERACTION_SOFIX::Type
---@field ENUM_ICONS ENUM_INTERACTION_ICON::Type
---@field DT_NOTIFICATION_ICON UDataTable
---@field ProgressBarImage UMaterialInstanceDynamic
---@field UpdatingProgressBar boolean
---@field ProgressBarTime float
---@field ProgressBarCurrentTime float
---@field NewVar_0 boolean
local UInteraction_Info_WBP_C = {}

---@param InVisibility ESlateVisibility
function UInteraction_Info_WBP_C:OnVisibilityChange(InVisibility) end
---@param InVisibility ESlateVisibility
function UInteraction_Info_WBP_C:SetImageVisibility(InVisibility) end
function UInteraction_Info_WBP_C:OnInitialized() end
---@param InteractionTime float
function UInteraction_Info_WBP_C:ProgressBarStartDisplay(InteractionTime) end
---@param InteractionSuccesfull boolean
function UInteraction_Info_WBP_C:ProgressBarEndDisplay(InteractionSuccesfull) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UInteraction_Info_WBP_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UInteraction_Info_WBP_C:ExecuteUbergraph_Interaction_Info_WBP(EntryPoint) end


