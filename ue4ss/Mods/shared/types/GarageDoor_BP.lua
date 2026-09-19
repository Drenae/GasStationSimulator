---@meta

---@class AGarageDoor_BP_C : AGarageDoors_Parents_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field GarageDoor_SK USkeletalMeshComponent
local AGarageDoor_BP_C = {}

function AGarageDoor_BP_C:CachePose() end
function AGarageDoor_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGarageDoor_BP_C:ExecuteUbergraph_GarageDoor_BP(EntryPoint) end


