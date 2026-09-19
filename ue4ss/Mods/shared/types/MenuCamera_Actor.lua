---@meta

---@class AMenuCamera_Actor_C : AActor
---@field DefaultSceneRoot USceneComponent
---@field OptionsScreenCamera ACineCameraActor
---@field MainMenuScreenCamera ACineCameraActor
---@field NewGameScreenCamera ACineCameraActor
local AMenuCamera_Actor_C = {}

function AMenuCamera_Actor_C:NewGameTransition() end
function AMenuCamera_Actor_C:MainMenuTransition() end
function AMenuCamera_Actor_C:OptionsCameraTransition() end


