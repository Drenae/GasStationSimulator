---@meta

---@class UWBP_CinemaSign_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VerticalBox_Movies UVerticalBox
local UWBP_CinemaSign_C = {}

function UWBP_CinemaSign_C:RefreshMovies() end
function UWBP_CinemaSign_C:Construct() end
---@param bGameLoaded boolean
function UWBP_CinemaSign_C:RegisterCinemaManager(bGameLoaded) end
---@param bAppliedSetting boolean
function UWBP_CinemaSign_C:OnSettingsApplied(bAppliedSetting) end
---@param EntryPoint int32
function UWBP_CinemaSign_C:ExecuteUbergraph_WBP_CinemaSign(EntryPoint) end


