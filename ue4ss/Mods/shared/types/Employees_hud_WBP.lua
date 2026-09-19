---@meta

---@class UEmployees_hud_WBP_C : UEmployess_hud
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field HorizontalBox_employees UHorizontalBox
local UEmployees_hud_WBP_C = {}

function UEmployees_hud_WBP_C:Construct() end
---@param CharacterRef AAICharacterBase
function UEmployees_hud_WBP_C:OnEmployeHired_Event_0(CharacterRef) end
---@param CharacterRef AAICharacterBase
function UEmployees_hud_WBP_C:OnEmployeFired_Event_0(CharacterRef) end
---@param GameLoaded boolean
function UEmployees_hud_WBP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param EntryPoint int32
function UEmployees_hud_WBP_C:ExecuteUbergraph_Employees_hud_WBP(EntryPoint) end


