---@meta

---@class ACoyotte_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RandomTImeStart float
---@field RandomTimeEnd float
---@field RestTime float
local ACoyotte_C = {}

---@param DeltaSeconds float
function ACoyotte_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACoyotte_C:ExecuteUbergraph_Coyotte(EntryPoint) end


