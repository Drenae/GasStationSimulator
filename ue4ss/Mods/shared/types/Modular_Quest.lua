---@meta

---@class UModular_Quest_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Outro UWidgetAnimation
---@field Intro UWidgetAnimation
---@field Complited UWidgetAnimation
---@field PlusOne UWidgetAnimation
---@field Ammount_Horizontal UHorizontalBox
---@field Current UTextBlock
---@field MainHolder UVerticalBox
---@field Max UTextBlock
---@field Progress_Bar_Sizer USizeBox
---@field ProgressBar_Quest UProgressBar
---@field Quest_Title_TXT UTextBlock
---@field Sign UTextBlock
---@field Quest UGSSQuest
local UModular_Quest_C = {}

---@param Target UGSSQuest
function UModular_Quest_C:UpdateQuest(Target) end
function UModular_Quest_C:Construct() end
---@param CurrentQuest UGSSQuest
function UModular_Quest_C:OnQuestUpdated(CurrentQuest) end
function UModular_Quest_C:Destruct() end
---@param EntryPoint int32
function UModular_Quest_C:ExecuteUbergraph_Modular_Quest(EntryPoint) end


