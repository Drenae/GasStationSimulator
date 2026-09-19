---@meta

---@class URenown_Multi_Popup_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TextBlock_Value UTextBlock
---@field ColorArray TArray<FLinearColor>
local URenown_Multi_Popup_C = {}

---@param bBonus boolean
function URenown_Multi_Popup_C:HasUpcomingMovieRushHourBonus(bBonus) end
function URenown_Multi_Popup_C:Construct() end
---@param EntryPoint int32
function URenown_Multi_Popup_C:ExecuteUbergraph_Renown_Multi_Popup(EntryPoint) end


