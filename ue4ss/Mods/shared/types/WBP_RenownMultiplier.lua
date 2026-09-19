---@meta

---@class UWBP_RenownMultiplier_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RushHourIcon UImage
---@field TextBlock_Title UTextBlock
---@field TextBlock_Value UTextBlock
---@field ColorArray TArray<FLinearColor>
local UWBP_RenownMultiplier_C = {}

---@param bBonus boolean
function UWBP_RenownMultiplier_C:HasUpcomingMovieRushHourBonus(bBonus) end
---@param bGameLoaded boolean
function UWBP_RenownMultiplier_C:RegisterCinemaManager(bGameLoaded) end
---@param NewDirty float
function UWBP_RenownMultiplier_C:OnDirtyUpdated(NewDirty) end
function UWBP_RenownMultiplier_C:Construct() end
function UWBP_RenownMultiplier_C:OnQueueUpdated() end
---@param EntryPoint int32
function UWBP_RenownMultiplier_C:ExecuteUbergraph_WBP_RenownMultiplier(EntryPoint) end


