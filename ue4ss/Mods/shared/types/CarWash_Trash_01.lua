---@meta

---@class ACarWash_Trash_01_C : ACarWashTrash
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Tint Array'] TArray<FLinearColor>
local ACarWash_Trash_01_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACarWash_Trash_01_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function ACarWash_Trash_01_C:UserConstructionScript() end
function ACarWash_Trash_01_C:ReceiveBeginPlay() end
---@param Pawn APawn
function ACarWash_Trash_01_C:DisableInteractionInfo(Pawn) end
---@param EndPlayReason EEndPlayReason::Type
function ACarWash_Trash_01_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ACarWash_Trash_01_C:ExecuteUbergraph_CarWash_Trash_01(EntryPoint) end


