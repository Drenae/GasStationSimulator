---@meta

---@class AToilet_BP_C : AToilet
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ToiletStallBox UBoxComponent
---@field dddd AActor
local AToilet_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AToilet_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function AToilet_BP_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
function AToilet_BP_C:CurrentCustomer() end
---@param bLoadedFromSaveGame boolean
---@param NewVersion boolean
function AToilet_BP_C:LoadGameBeginPlay(bLoadedFromSaveGame, NewVersion) end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function AToilet_BP_C:OnLoadGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
---@param EntryPoint int32
function AToilet_BP_C:ExecuteUbergraph_Toilet_BP(EntryPoint) end


