---@meta

---@class AVehicleAdvHud_C : AHUD
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field HUDXRatio float
---@field HUDYRatio float
local AVehicleAdvHud_C = {}

---@param SizeX int32
---@param SizeY int32
function AVehicleAdvHud_C:ReceiveDrawHUD(SizeX, SizeY) end
---@param EntryPoint int32
function AVehicleAdvHud_C:ExecuteUbergraph_VehicleAdvHud(EntryPoint) end


