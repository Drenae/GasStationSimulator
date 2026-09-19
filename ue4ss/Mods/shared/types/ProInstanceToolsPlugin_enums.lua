---@enum EProInstanceInstanceType
local EProInstanceInstanceType = {
    InstanceType_StaticMesh = 0,
    InstanceType_ISM = 1,
    InstanceType_HISM = 2,
    InstanceType_ActorClass = 3,
    InstanceType_MAX = 4,
}

---@enum EProInstanceOnOverlap
local EProInstanceOnOverlap = {
    OnOverlap_Ignore = 0,
    OnOverlap_Destroy = 1,
    OnOverlap_MAX = 2,
}

---@enum EProInstanceScatterBoxPivotPoint
local EProInstanceScatterBoxPivotPoint = {
    ScatterBoxPivotPoint_AtCenter = 0,
    ScatterBoxPivotPoint_AtCorner = 1,
    ScatterBoxPivotPoint_MAX = 2,
}

---@enum EProInstanceScatterPlacementType
local EProInstanceScatterPlacementType = {
    ScatterPlacementType_Box = 0,
    ScatterPlacementType_Sphere = 1,
    ScatterPlacementType_MAX = 2,
}

---@enum EProInstanceToolsCircleInstanceRotationType
local EProInstanceToolsCircleInstanceRotationType = {
    CircleInstanceRotationType_Default = 0,
    CircleInstanceRotationType_ToCenter = 1,
    CircleInstanceRotationType_FromCenter = 2,
    CircleInstanceRotationType_MAX = 3,
}

---@enum EProInstanceToolsPathPlacementType
local EProInstanceToolsPathPlacementType = {
    PathPlacementType_Distance = 0,
    PathPlacementType_SplinePoint = 1,
    PathPlacementType_MAX = 2,
}

