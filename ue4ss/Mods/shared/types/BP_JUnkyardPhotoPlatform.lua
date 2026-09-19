---@meta

---@class ABP_JUnkyardPhotoPlatform_C : ACarWreckPlaceableArea
---@field Direction float
---@field RotationSpeed float
---@field Rotate boolean
local ABP_JUnkyardPhotoPlatform_C = {}

---@param DeltaTime float
---@param Target AActor
function ABP_JUnkyardPhotoPlatform_C:RotateActor(DeltaTime, Target) end
---@param DeltaTime float
ABP_JUnkyardPhotoPlatform_C['Rotate Platform'] = function(self, DeltaTime) end
---@param bRotate boolean
---@param Direction float
function ABP_JUnkyardPhotoPlatform_C:SetRotate(bRotate, Direction) end


