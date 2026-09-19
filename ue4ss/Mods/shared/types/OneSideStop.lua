---@meta

---@class AOneSideStop_C : AStop_C
---@field DirectionArrow UArrowComponent
---@field Distance float
---@field Angle float
---@field CheckLeftSide boolean
---@field ParkingStop AParkingStopHelp_C
---@field ShortDistance float
local AOneSideStop_C = {}

---@param Vehicle AGSSWheeledVehicle
---@param isStopped boolean
function AOneSideStop_C:CheckCollisionStop(Vehicle, isStopped) end
function AOneSideStop_C:UserConstructionScript() end


